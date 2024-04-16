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
    string s;
    cin>>s;
    // int ab =0;
    // int ba =0;
    // for(int i=0;i<s.length();i++){
    //     if(s[i]=='a' && s[i+1]=='b') ab++;
    //     else if(s[i]=='b' && s[i+1]=='a') ba++;
    //     else continue;
    // }
    // if(ab==ba){
    //     cout<<s<<endl;
    // }
    // if(ab>ba){
    //     // abbb
    //     while(ab>ba){

    //     }
    // }
    if (s[0] == s.back()) {
            // If the first and last characters are the same, print the string as it is
            cout << s << endl;
        } else {
            // Otherwise, print the string with either the first character replaced by the last character or vice versa
            if (s[0] == 'A') {
                s[0] = s.back();
            } else {
                s.back() = s[0];
            }
            cout << s << endl;
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