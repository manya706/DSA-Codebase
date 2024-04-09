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
    int n,c,d;
    cin>>n>>c>>d;
    vector<int> arr(n*n);
    scanv(arr);
    
    int o = 0;
    o = n*n;
    unordered_map<int,int>mp;
    for(int i=0;i<o;i++){
        mp[arr[i]]++;
    }
    
    sort(arr.begin(),arr.end());
    int a11 = arr[0];
    mp[arr[0]]--;
    
    int a12 = a11;
    int a21 = a11;
    while(o>=0){
        int x = a12+c;
        int y = a21+d;
        int t = a12+d;
        int f = a21+c;
        if(mp.find(x)!=mp.end() && mp[x] > 0){
            mp[x]--;
            a12 = x;
        }
        if(mp.find(y)!=mp.end() && mp[y] > 0){
            mp[y]--;
            a21 = y; 
        }
        if(mp.find(f)!=mp.end() && mp[f] > 0){
            mp[f]--;
            a12 = f; 
        }
        if(mp.find(t)!=mp.end() && mp[t] > 0){
            mp[t]--;
            a21 = t; 
        }
        o--;
    }
    bool t = false;
    for(auto i:mp){
        if(i.second>0){
            no;
            t = false;
            break;
        }
        else{
            t=true;   
        }
    }
    if(t) yes;
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