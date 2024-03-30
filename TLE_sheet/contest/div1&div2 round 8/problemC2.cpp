#include <bits/stdc++.h>
using namespace std;
#define pb push_back
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
#define imax INT_MAX
#define imin INT_MIN
#define exp 1e9
#define ll long long

void solve() {
    ll n,x,y;
    cin>>n>>x>>y;
    vector<ll>seen(x);
    for(auto &i:seen) {
        cin>>i;
        i--;
    }

    sort(seen.begin(),seen.end());
    vector<ll>odd,even;
    for(int i=0;i<x;i++){
        ll r=seen[i];
        ll s=seen[(i+1)%x];
        ll diff =(s - r+n)%n;
        if(diff>=3){
            ll bad = diff-1;
            if(bad&1)odd.push_back(bad);
            else even.push_back(bad);
        }
    }
    sort(odd.begin(), odd.end());
    ll z=n;
    for (auto &i: odd) {
        if (y >= i/2) {
            y -= (i/2);
            i=0;
        } else {
            ll a = min(y, i/2);
            i -= (2*a);
            y-=a;
            z-=i;
        }
    }
    for (auto &i: even) {
        
            ll a = min(y, i/2);
            i -= (2*a);
            y-=a;
            z-=i;
        
    }
    cout<<(z-2)<<endl;

}

int main() {
    ll t;
    cin >> t;
    while (t--) solve();
    return 0;
}