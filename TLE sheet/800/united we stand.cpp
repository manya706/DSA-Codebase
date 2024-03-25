#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
#define pb push_back
#define ll long long int
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vi arr;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            arr.pb(x);
        }
        sort(arr.begin(),arr.end());
        vi b ,c;
        int mn = arr[0];
        for(int i=0;i<n;i++){
            if(mn==arr[i]) b.pb(arr[i]);
            else c.pb(arr[i]);
        }
        if(b.size()==0 || c.size()==0) cout<<-1<<endl;
        else{
            cout<<b.size()<<" "<<c.size()<<endl;
            for(auto i:b){
                cout<<i<<" ";
            }
            cout<<endl;
            for(auto i:c){
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }
}