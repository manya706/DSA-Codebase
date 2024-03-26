#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
#define pb push_back
#define ll long long int
#define sz(x)             int ((x).size())
#define All(x)            (x).begin(), (x).end()
#define scanv(x)          for(auto &i: x) cin >> i
void solve(){
    int n;
    cin>>n;
    vi arr(n);
    scanv(arr);
    if(is_sorted(All(arr))){
        int ans=INT_MAX;
        for(int i=0;i<n-1;++i){
            int q= arr[i+1]-arr[i];
            ans = min(ans,q/2 +1);
        }
        cout<<ans<<endl;
    }
    else cout<<0<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}