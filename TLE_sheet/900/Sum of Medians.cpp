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
const int N=2e5+100;
ll a[N];
void solve(){
    ll n, k;
    cin >> k >> n;
    // vector<int> a;
    for (int i=1;i<=n*k;i++){
        cin >> a[i];
    }
    ll x=(k+1)/2 - 1;
    x = k - x;
    ll z=n*k+1;
    ll ans=0;
    while(n--){
        z-=x;
        if (z<=0) break;
        ans+=a[z];
    }
    cout << ans << endl;

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