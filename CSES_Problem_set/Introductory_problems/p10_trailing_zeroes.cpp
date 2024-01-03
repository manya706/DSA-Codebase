// Your task is to calculate the number of trailing zeros in the factorial n!.
// For example, 20!=2432902008176640000 and it has 4 trailing zeros.
// Input
// The only input line has an integer n.
// Output
// Print the number of trailing zeros in n!.
// Constraints

// 1 \le n \le 10^9

// Example
// Input:
// 20

// Output:
// 4

// INTUITION- The intuition behind this code lies in recognizing that the number of 
// trailing zeros in a factorial is determined by the count of factors of 5 in the prime
//  factorization of the factorial.
#include<bits/stdc++.h>
#include<vector>
#include<math.h>
#include<map>
using namespace std;
typedef long long int ll;
int main(){
    ll n;
    cin>>n;
    int total=0;
    for(ll i=5;n/i >= 1;i*=5){
        total+=n/i;
        // cout<<i<<" "<<n/i<<endl;
        // cout<<total<<endl;
    }
    cout<<total;
}