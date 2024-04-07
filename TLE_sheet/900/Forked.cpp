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
    int a,b;
    int xk,yk;
    int xq,yq;
    cin>>a>>b;
    cin>>xk>>yk;
    cin>>xq>>yq;
    set<pair<int,int> > k,q;
    int x[4]={-1,1,-1,1}, y[4]={-1,-1,1,1};
    for(int i=0;i<4;i++){
        k.insert({xk+a*x[i],yk+b*y[i]});
        k.insert({xk+b*x[i],yk+a*y[i]});
        q.insert({xq+a*x[i],yq+b*y[i]});
        q.insert({xq+b*x[i],yq+a*y[i]});
    }
    int cnt=0;
    for(auto i:k) {
        if(q.find(i)!=q.end()) cnt++;
    }
    cout<<cnt<<endl;
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