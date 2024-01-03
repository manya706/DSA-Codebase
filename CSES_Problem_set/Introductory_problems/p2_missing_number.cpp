// CSES - Missing Number
// Time limit: 1.00 s
// Memory limit: 512 MB
// You are given all numbers between 1,2,\ldots,n except one. Your task is to find the missing number.
// Input
// The first input line contains an integer n.
// The second line contains n-1 numbers. Each number is distinct and between 1 and n (inclusive).
// Output
// Print the missing number.
// Example
// Input:
// 5
// 2 3 1 5

// Output:
// 4
#include<bits/stdc++.h>
#include<vector>
#include<map>
using namespace std;
typedef long long int ll;
int main(){
    int n;
    std::cin>>n;
    vector<ll> input;
    for(ll i=0;i<n-1;i++){
        ll x;
        cin>>x;
        input.push_back(x);
    }
    ll sum=0;
    sum = static_cast<ll>(n)*(n+1)/2;
    ll sum2 =0;
    for(ll i=0;i<n-1;i++){
        sum2+=input[i];
    }
    cout<<(abs(sum-sum2));
}