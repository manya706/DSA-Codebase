#include <iostream>
#include <vector>
using namespace std;

// Function to check if a number contains only digits 0 and 1
bool containsOnlyZeroesAndOnes(int number) {
    while (number > 0) {
        int digit = number % 10;
        if (digit != 0 && digit != 1) {
            return false; // If any digit is not 0 or 1, return false
        }
        number = number / 10;
    }
    return true; // If all digits are 0 or 1, return true
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Generating a list of numbers that contain only digits 0 and 1
    vector<int> validNumbers;
    for (int i = 1; i <= 100000; i++) {
        if (containsOnlyZeroesAndOnes(i)) {
            validNumbers.push_back(i);
        }
    }

    int testCases;
    cin >> testCases;
    while (testCases--) {
        int number;
        cin >> number;

        // Checking if the number can be factorized using only digits 0 and 1
        int index = validNumbers.size() - 1;
        while (number > 0 && index >= 0) {
            if (number % validNumbers[index] == 0 && validNumbers[index] != 1) {
                number = number / validNumbers[index];
                continue;
            }
            index--;
        }

        // Outputting the result
        if (number > 1) {
            cout << "NO" << endl; // If the number cannot be factorized using only digits 0 and 1
        } else {
            cout << "YES" << endl; // If the number can be factorized using only digits 0 and 1
        }
    }

    return 0;
}
