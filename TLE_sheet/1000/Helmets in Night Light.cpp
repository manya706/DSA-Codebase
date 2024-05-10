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
bool static  mycomp(pair<ll,ll>p1,pair<ll,ll>p2){
    if(p1.first==p2.first){
        return p1.second>p2.second;
    }
    else {
        return p1.first<p2.first;
    }
}


// 1. For each resident, Pak Chanek calculates the cost of direct sharing and the cost of sharing through
// other residents. He chooses the minimum of these two costs for each resident.
// 2. After sorting the residents based on their costs, he starts with the resident who has the lowest cost.
// 3. He shares the announcement with as many residents as possible until either all residents are reached 
// or he runs out of residents to share with.
// 4. He repeats this process until either all residents are reached or he runs out of residents to share with.
void solve(){
    ll n,p;
    cin>>n>>p;
    vector<ll> a1(n);
    scanv(a1);
    vector<pair<ll,ll>> v;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        v.pb(make_pair(min(p,x),a1[i]));
    }
    sort(v.begin(),v.end(),mycomp);
    ll ans=p;
    ll rem=n-1;
    for(int i=0;i<n-1;i++){
        ans += min(v[i].second, rem)*v[i].first;
        rem -= min(v[i].second, rem);
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