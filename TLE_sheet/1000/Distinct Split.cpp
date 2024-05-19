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
// solution
// Let's check all splitting points i
//  for all (1≤i≤n−1).
//  We denote a splitting point as the last index of the first string we take (and all the remaining characters will go to the second string).
//  We need to keep a dynamic count of the number of distinct characters in both strings a
//  (the first string) and b
//  (the second string). We can do this using two frequency arrays (and adding one to the distinct count of either string a
//  or b
//  when the frequency of a character is greater than zero.
void solve(){
    int n;
    string s;
    cin>>n;
    cin>>s;
    vector<int> cnt(26,0), p(26,0);
    for(auto i:s){
        cnt[i-'a']++;
    }
    int ans=0;
    for(auto i:s){
        --cnt[i-'a'];
        ++p[i-'a'];
        int cur = 0;
        // Inside this loop, the sum of the minimum of 1 and the counts in cnt and p for each character is 
        // calculated and added to cur. This seems to be counting the occurrences of each character, considering
        //  the current position and the remaining characters.
        for(int i = 0; i < 26; ++i) {
            cur += min(1, cnt[i]) + min(1, p[i]);
        }
        ans = max(ans,cur);
    }
    cout<<ans<<endl;
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