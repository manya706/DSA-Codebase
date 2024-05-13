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
    int n, k, q;
    cin>>n>>k>>q;
    vi temp(n);
    scanv(temp);
    ll len = 0;
    ll ans=0;
    for(int i=0;i<n;i++){
        if(temp[i]<=q){
            len++;
        }
        else{
            if(len>=k){
                ans+= (len - k + 1) * (len - k + 2) / 2;
            }
            len = 0;
        }
    }
    if(len >= k){
        ans += (len - k + 1) * (len - k + 2) / 2;
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