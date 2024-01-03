// Your task is to divide the numbers 1,2,\ldots,n into two sets of equal sum.
// Input
// The only input line contains an integer n.
// Output
// Print "YES", if the division is possible, and "NO" otherwise.
// After this, if the division is possible, print an example of how to create the sets. First, print the number of elements in the first set followed by the elements themselves in a separate line, and then, print the second set in a similar way.

// Example 1
// Input:
// 7

// Output:
// YES
// 4
// 1 2 4 7
// 3
// 3 5 6
// Example 2
// Input:
// 6

// Output:
// NO

#include<bits/stdc++.h>
#include<vector>
#include<map>
using namespace std;
typedef long long int ll;
int main(){
    ll n;
    cin>>n;
    ll total = (n*(n+1)) / 2;
    if(total & 1) cout<<"NO";
    else{
        cout<<"YES"<<endl;
        vector<ll> ans1,ans2;
        total /= 2LL;
        ll sum=0;
        while (n)
        {
            if (total - n >= 0)
            {
                ans1.push_back(n);
                total -= n;
            }
            else
            {
                ans2.push_back(n);
            }
            n--;
        }
        cout<<ans1.size()<<endl;
        for(ll i=0;i<ans1.size();i++){
            cout<<ans1[i]<<" ";
        }
        cout<<endl;
        cout<<ans2.size()<<endl;
        for(ll i=0;i<ans2.size();i++){
            cout<<ans2[i]<<" ";
        }

    }
}