// You are given an array of n integers. You want to modify the array so that it is increasing, i.e., every element is at least as large as the previous element.
// On each move, you may increase the value of any element by one. What is the minimum number of moves required?
// Input
// The first input line contains an integer n: the size of the array.
// Then, the second line contains n integers x_1,x_2,....,x_n: the contents of the array.
// Output
// Print the minimum number of moves.
// Constraints

// Example
// Input:
// 5
// 3 2 5 1 7

// Output:
// 5
#include<bits/stdc++.h>
#include<vector>
#include<map>
using namespace std;
typedef long long int ll;
int main(){
    ll n;
    cin>>n;
    vector<ll> inp;
    for(ll i=0;i<n;i++){
        ll o;
        cin>>o;
        inp.push_back(o);
    }
    ll moves=0;
    for(ll i=1;i<n;i++){
        if(inp[i-1]>inp[i]){
            moves += (inp[i-1]-inp[i]);
            inp[i] = inp[i-1];
        }
    }
    cout<<moves;
}