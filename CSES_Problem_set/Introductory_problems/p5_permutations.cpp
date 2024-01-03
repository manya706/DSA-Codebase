// A permutation of integers 1,2,\ldots,n is called beautiful if there are no adjacent elements whose difference is 1.
// Given n, construct a beautiful permutation if such a permutation exists.
// Input
// The only input line contains an integer n.
// Output
// Print a beautiful permutation of integers 1,2,\ldots,n. If there are several solutions, you may print any of them. If there are no solutions, print "NO SOLUTION".


// Example 1
// Input:
// 5

// Output:
// 4 2 5 3 1
// Example 2
// Input:
// 3

// Output:
// NO SOLUTION

#include<bits/stdc++.h>
#include<vector>
#include<map>
using namespace std;
typedef long long int ll;
int main(){
    ll n;
    cin>>n;
    vector<ll>ans;
    if(1<n && n<4) cout<<"NO SOLUTION";
    else{
        for (ll i = 2; i <= n; i += 2) {
        ans.push_back(i);
        }
        for (ll i = 1; i <= n; i += 2) {
            ans.push_back(i);
        }       
        for(ll i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
    }
    
}