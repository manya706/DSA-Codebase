#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define sz(x)             int ((x).size())
#define All(x)            (x).begin(), (x).end()
#define scanv(x)          for(auto &i: x) cin >> i
#define mk make_pair
#define pii pair<int, int>
#define a first
#define b second
#define vi vector<int>
#define umap unordered_map
#define uset unordered_set
#define MOD 1000000007
ll gcd(ll a, ll b)              { if (b == 0) return a; return gcd(b, a % b); }
#define yes                 cout<<"YES"<<endl
#define no                  cout<<"NO"<<endl
#define neg1                cout<<-1<<endl
#define imax INT_MAX
#define imin INT_MIN
#define exp 1e9
void solve(){
    int n;
    cin>>n;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        ++mp[x];
    }
    int am=0;
    for(auto &[x,y]:mp){
        am = max(am,y);
    }
    int ans=0;
    while(am<n){
        int diff = min(n-am, am);
        ans+= 1+diff;
        am += diff;
    }
    cout<<ans<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ttt; cin >> ttt;
    while(ttt--) {
        solve();
    }
    return 0;
}