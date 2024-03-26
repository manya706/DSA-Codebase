#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
#define pb push_back
// using by just if an element is present or not
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        map<int,int> mp;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            mp[x]++;
        }
        int f=0;
        for(auto i:mp){
            if(i.first==k) f=1;
        }
        if(f==1) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}