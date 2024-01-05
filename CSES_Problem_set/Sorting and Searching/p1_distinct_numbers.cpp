// You are given a list of n integers, and your task is to calculate the number of distinct values in the list.
// Input
// The first input line has an integer n: the number of values.
// The second line has n integers x_1,x_2,\dots,x_n.
// Output
// Print one integers: the number of distinct values.
// Constraints

// 1 \le n \le 2 \cdot 10^5
// 1 \le x_i \le 10^9

// Example
// Input:
// 5
// 2 3 2 2 3

// Output:
// 2
#include<bits/stdc++.h>
#include<vector>
#include<math.h>
#include<map>
using namespace std;
typedef long long int ll;

int main(){
    ll n;
    cin>>n;
    set<ll> mp;
    for(ll i=0;i<n;i++){
        ll o;
        cin>>o;
        mp.insert(o);
    }

    cout<<mp.size();
}