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
#define imax INT_MAX
#define imin INT_MIN
#define exp 1e9
void solve(){
    int n;
    cin>>n;
    vi arr(n);
    scanv(arr);
    swap(arr[0],arr[1]);
    swap(arr[0],arr[n-1]);
    if(arr[0]==arr[1]){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        for(auto i:arr){
            cout<<i<<" ";
        }
        cout<<endl;
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