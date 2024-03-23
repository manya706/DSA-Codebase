#include <bits/stdc++.h>
using namespace std;
//  for more than 3>distinct element answer always NO
//  if count of e1-e2>2 then also answer is NO
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a;
        set<int> v;
        map<int,int> mp;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a.push_back(x);
            v.insert(x);
            ++mp[a[i]];
        }
        if(v.size()>2) cout<<"No"<<endl;
        else if(v.size()==1) cout<<"Yes"<<endl;
        else{
            sort(a.begin(),a.end());
            int f1 = a[0],f2=a[n-1];
            if(abs(mp[f1]-mp[f2])>1) cout<<"No"<<endl;
            else cout<<"Yes"<<endl;
        }
    }
}