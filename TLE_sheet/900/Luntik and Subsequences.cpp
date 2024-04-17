#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define sz(x)             int ((x).size())
#define All(x)            (x).begin(), (x).end()
#define scanv(x)          for(auto &i: x) cin >> i
#define printv(x)          for(auto &i: x) cout << i <<" "
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
// It can be noticed that all subsequences with sum s−1
//  appear if we erase some 0
// -es from the array and also erase exactly one 1
// . We can independently calculate the number of ways to erase some 0
// -es from the array (that way the sum will remain the same), then calculate the number of ways to erase exactly one 1
//  from the array (that way the sum will become equal to s−1
// ), and then multiply these two numbers. Therefore, the answer is equal to 2c0⋅c1
// , where c0
//  is the number of 0
// -es in the array, and c1
//  is the number of 1
// -s.
void solve(){
    int n,x;
    cin>>n;
    // vector<int> arr(n);
    int one=0, zero=0;
    for(int i=1;i<=n;++i){
        
        cin>>x;
        if(x==1) one++;
        if (x==0) zero++;
        
    }
    cout<<(1ll<<zero)*(ll)one<<endl;
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