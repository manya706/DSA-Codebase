#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define lli long long int
#define ll long long 
#define sz(x)             int ((x).size())
#define All(x)            (x).begin(), (x).end()
#define scanv(x)          for(auto &i: x) cin >> i
#define mk make_pair
#define pii pair<int, int>
#define a first
#define b second
#define vii vector<int>
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
    lli n = 0;
		cin >> n; 
		vii fi, si;
		for(lli i = 0; i < n; ++i){
			lli m;
			cin >> m; 
			//lli mn1 = inf.l, mn2 = inf.l;
			vii tm;
			for(lli j = 0; j < m; ++j){
				lli ai;
				cin >> ai;
				tm.pb(ai);
			}
			sort(All(tm));
			fi.pb(tm[0]);
			si.pb(tm[1]);
			
		}
		sort(All(fi));
		sort(All(si));
		lli ans = 0;
		for(lli i = 1; i < sz(si); ++i) ans += si[i];
		fi.pb(si[0]);
		sort(All(fi));
		ans += fi[0];
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