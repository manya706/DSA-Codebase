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
    int cnt=0;
    int maxcnt=0;
    for(auto i:arr){
        if(i==0){
            cnt++;
        }
        else{
            cnt=0;
        }
        maxcnt = max(maxcnt,cnt);
    }
    cout<<maxcnt<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}