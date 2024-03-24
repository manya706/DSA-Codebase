#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
#define pb push_back
#define ll long long int
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll sum=0;
        for(int i=0;i<n-1;i++){
            ll p;
            cin>>p;
            sum+=p;
        }
        cout<<-(sum)<<endl;
    }
}