// Your task is to calculate the number of bit strings of length n.
// For example, if n=3, the correct answer is 8, because the possible bit strings are 000, 001, 010, 011, 100, 101, 110, and 111.
// Input
// The only input line has an integer n.
// Output
// Print the result modulo 10^9+7.
// Constraints

// 1 \le n \le 10^6

// Example
// Input:
// 3

// Output:
// 8
#include<bits/stdc++.h>
#include<vector>
#include<math.h>
#include<map>
using namespace std;
typedef long long int ll;
#define MOD 1e9+7
ll power(ll base, ll exponent, ll modulus) {
    ll result = 1;
    base = base % modulus;
    while (exponent > 0) {
        if (exponent % 2 == 1)
            result = (result * base) % modulus;
        exponent = exponent >> 1;
        base = (base * base) % modulus;
    }
    return result;
}
int main(){
    ll n;
    cin>>n;
    ll total = power(2,n,MOD);
    cout<<total;
}