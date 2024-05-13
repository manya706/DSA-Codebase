#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define lli long long int
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
lli gcd(lli a, lli b)              { if (b == 0) return a; return gcd(b, a % b); }
#define yes                 cout<<"YES"<<endl
#define no                  cout<<"NO"<<endl
#define neg1                cout<<-1<<endl
#define imax INT_MAX
#define imin INT_MIN
#define exp 1e9
void solve(){
    int n,k;
    cin>>n>>k;
    map<lli, set<lli>> m;
    
    // Input monster health points and organize them by (health % k)
    for(lli i = 0, ai; i < n; ++i){
        cin >> ai; 
        m[ai % k].insert(i + 1);
    }
    
    // Output the order in which monsters with (health % k) == 0 die
    auto it = begin(m[0]);
    for(auto j = it; j != end(m[0]); ++j){
        cout << *j << ' ';
    }
    
    // Output the order in which monsters with (health % k) != 0 die
    vector<vector<lli>> ans(n);
    lli p = 0;
    lli cnt = 1;
    for(auto i: m){
        if(i.first == 0){
            cnt = 0;
            continue;
        }
        for(auto j: i.second) ans[p].push_back(j);
        ++p;
    }
    
    // Output the order in which monsters with (health % k) != 0 die in reverse order
    for(lli i = p - 1; i >= 0; --i){
        for(auto j: ans[i]) cout << j << ' ';
    }
    
    cout << endl;
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