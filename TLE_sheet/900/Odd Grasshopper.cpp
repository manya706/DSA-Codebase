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
    long long x , n;
    cin>>x>>n;
    //  odd = jump right, even = jump left
    if(x%2 == 0){
        if(n%4==0){
            cout<<x<<endl;
        }
        else if(n%4==1){
            cout<<x-n<<endl;
        }
        else if(n%4==2){
            cout<<x+1<<endl;
        }
        else if(n%4==3){
            cout<<x+n+1<<endl;
        }

    }
    else{
        if(n%4==0){
            cout<<x<<endl;
        }
        else if(n%4==1){
            cout<<x+n<<endl;
        }
        else if(n%4==2){
            cout<<x-1<<endl;
        }
        else if(n%4==3){
            cout<<x-n-1<<endl;
        }
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