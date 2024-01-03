// Your task is to count for k=1,2,\ldots,n the number of ways two knights can be placed on a k \times k chessboard so that they do not attack each other.
// Input
// The only input line contains an integer n.
// Output
// Print n integers: the results.
// Constraints

// 1 \le n \le 10000

// Example
// Input:
// 8

// Output:
// 0
// 6
// 28
// 96
// 252
// 550
// 1056
// 1848

#include<bits/stdc++.h>
#include<vector>
#include<map>
using namespace std;
typedef long long int ll;
int main(){
    ll k;
    cin>>k;
    for(ll i=1;i<=k;i++){
        cout<< i*i*(i*i-1)/2 - 4*(i-1)*(i-2)<<endl;
    }
}