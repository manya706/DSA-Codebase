#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        string ans = "Yes";
        while(1){
            int f=0;
            for(int i=1;i<n-1;i++){
            if(v[i]>v[i-1] && v[i]>v[i+1]){
                swap(v[i],v[i+1]);
                f=1;
            }
            }
            if(is_sorted(v.begin(),v.end())) break;
            if(!is_sorted(v.begin(),v.end()) && f==0){
                ans = "No";
                break;
            }
        
        }
        cout<<ans<<endl;
        
    }
}