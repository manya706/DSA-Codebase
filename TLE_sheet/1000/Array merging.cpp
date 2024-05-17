#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define sz(x)             int ((x).size())
#define All(x)            (x).begin(), (x).end()
#define scanv(x)          for(auto &i: x) cin >> i
#define mk make_pair
#define pii pair<int, int>
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
        cin >> n;
        vector<int> a(n + 1);
        vector<int> b(n + 1);
        for (int i = 1; i <= n; ++i)
        {
            cin >> a[i];
        }
        for (int i = 1; i <= n; ++i)
        {
            cin >> b[i];
        }
        vector<int> fa(n + n + 1);
        vector<int> fb(n + n + 1);
        int p = 1;
        for (int i = 2; i <= n; ++i)
        {
            if (a[i] != a[i - 1])
            {
                fa[a[i - 1]] = max(fa[a[i - 1]], i - p);
                p = i;
            }
        }
        fa[a[n]] = max(fa[a[n]], n - p + 1);

        p = 1;
        for (int i = 2; i <= n; ++i)
        {
            if (b[i] != b[i - 1])
            {
                fb[b[i - 1]] = max(fb[b[i - 1]], i - p);
                p = i;
            }
        }
        fb[b[n]] = max(fb[b[n]], n - p + 1);

        int ans = 0;
        for (int i = 1; i <= n + n; ++i)
        {
            ans = max(ans, fa[i] + fb[i]);
        }

        cout << ans << '\n';
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