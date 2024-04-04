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
// Explaination-
// If the length of the array is odd, the transformation will change the XOR result 
// to 0. This is because XOR of an odd number of elements, each containing the same
//  number twice, results in 0. Therefore, the condition is satisfied.
// If neither of the above cases is true, it signifies that there's no way 
// to transform the array to meet the condition, and the solution prints -1.

void solve(){
    int n;
    cin>>n;
    
    int ans=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        ans ^= x;
    }
    if(ans==0 || n&1) cout<<ans<<endl;
    else cout<<-1<<endl;

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