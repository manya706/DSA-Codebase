// There are n applicants and m free apartments. Your task is to distribute the apartments so that as many applicants as possible will get an apartment.
// Each applicant has a desired apartment size, and they will accept any apartment whose size is close enough to the desired size.
// Input
// The first input line has three integers n, m, and k: the number of applicants, the number of apartments, 
// and the maximum allowed difference.
// The next line contains n integers a_1, a_2, \ldots, a_n: the desired apartment size of each applicant. 
// If the desired size of an applicant is x, he or she will accept any apartment whose size is between x-k
//  and x+k.
// The last line contains m integers b_1, b_2, \ldots, b_m: the size of each apartment.
// Output
// Print one integer: the number of applicants who will get an apartment.
// Constraints

// 1 \le n, m \le 2 \cdot 10^5
// 0 \le k \le 10^9
// 1 \le a_i, b_i \le 10^9

// Example
// Input:
// 4 3 5
// 60 45 80 60
// 30 60 75

// Output:
// 2
#include<bits/stdc++.h>
#include<vector>
#include<math.h>
#include<map>
using namespace std;
typedef long long int ll;
int main(){
    long long n, m, k, index = 0, answer = 0;
    cin >> n >> m >> k;
    vector<long long> clients(n);
    vector<long long> apartments(m);
    for (int i = 0; i < n; i++) {
        cin >> clients[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> apartments[i];
    }
    sort(clients.begin(), clients.end());
    sort(apartments.begin(), apartments.end());
    for (int i = 0; i < n; i++) {
        while (index < m) {
            if (apartments[index] + k < clients[i]) {
                index++;
            } else if (apartments[index] - k > clients[i]) {
                break;
            } else {
                index++, answer++;
                break;
            }
        }
    }
    cout << answer << endl;
}