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
    int n,q;
    cin>>n>>q;
    vector<ll> a;
    a.pb(0);
    ll sum=0;
    vector<ll>pref(n+1);
    
    for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            a.pb(x);
            sum+=a[i];
            pref[i]=pref[i-1];
            pref[i]+=a[i];
        }
    for(int i = 0; i < q; i++){
        long long l,r,k;
        cin >> l >> r >> k;
        long long ans = pref[n]-(pref[r]-pref[l-1])+k*(r-l+1);
        if(ans%2==1){
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
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