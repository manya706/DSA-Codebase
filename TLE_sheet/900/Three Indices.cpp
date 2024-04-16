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
    vector<int> arr;
    arr.pb(imax);
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        arr.pb(x);
    }
    int i=-1,j=-1,k=-1;
    for(int var=1;var<n;var++){
        if(arr[var]>arr[var-1] && arr[var]>arr[var+1]){
            i = var-1;
            j = var;
            k = var+1;
            break;
        }
    }
    if(i!=-1){
        yes;
        cout<<i<<" "<<j<<" "<<k<<endl;
    }
    else no;
    
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