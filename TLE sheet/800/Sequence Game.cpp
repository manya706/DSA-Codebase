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
        vi ans;
        ans.pb(arr[0]);
        for(int i=1;i<n;i++){
            if(arr[i]>=arr[i-1]){
                ans.pb(arr[i]);
            }
            else{
                ans.pb(arr[i]);
                ans.pb(arr[i]);
            }
        }
        cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}