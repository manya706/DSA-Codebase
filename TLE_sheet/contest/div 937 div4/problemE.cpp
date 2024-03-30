#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

#define int long long
#define vi vector<int>
#define read(a) for(auto &element: a) cin >> element
#define mod 1000000007
vector<vector<int>> divisors(200005);
vector<vector<int>> divisorsFrequency(200005);
vector<int> distances(200005);

#define MAXN 1000001
int smallestPrimeFactors[MAXN];

void computeSmallestPrimeFactors() {
    smallestPrimeFactors[1] = 1;
    for (int i = 2; i < MAXN; i++)
        smallestPrimeFactors[i] = i;

    for (int i = 4; i < MAXN; i += 2)
        smallestPrimeFactors[i] = 2;

    for (int i = 3; i * i < MAXN; i++) {
        if (smallestPrimeFactors[i] == i) {
            for (int j = i * i; j < MAXN; j += i)
                if (smallestPrimeFactors[j] == j)
                    smallestPrimeFactors[j] = i;
        }
    }
}

vector<int> primeFactorization(int number) {
    vector<int> factors;
    while (number != 1) {
        factors.push_back(smallestPrimeFactors[number]);
        number = number / smallestPrimeFactors[number];
    }
    return factors;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int testCases;
    cin >> testCases;
    computeSmallestPrimeFactors();

    while(testCases--) {
        int length;
        cin >> length;
        string str;
        cin >> str;
        
        int result = length;

        vector<int> possibleDivisors;
        for (int i = 1; i <= length; i++) {
            if (length % i == 0) {
                possibleDivisors.push_back(i);
            }
        }
        
        for (auto divisor : possibleDivisors) {
            int isValid = 1;
            int countOfDifferentSubstrings = 0;

            for (int i = 0; i < divisor; i++) {
                unordered_map<char, int> characterFrequency;
                for (int j = i; j < length; j += divisor) {
                    characterFrequency[str[j]]++;
                }
                if (characterFrequency.size() > 2) {
                    isValid = 0;
                }
                if (characterFrequency.size() == 2) {
                    int frequency = characterFrequency[str[i]];
                    if (frequency == 1 || frequency + 1 == length / divisor) {
                        countOfDifferentSubstrings++;
                    } else {
                        isValid = 0;
                    }
                }
            }
            if (isValid && countOfDifferentSubstrings <= 1) {
                result = divisor;
                break;
            }
        }
        cout << result << endl;
    }
    return 0;
}
