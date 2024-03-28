#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
#define pb push_back
#define ll long long int
#define sz(x)             int ((x).size())
#define All(x)            (x).begin(), (x).end()
#define scanv(x)          for(auto &i: x) cin >> i
void solve(){
    int n;
    cin>>n;
    vi arr(n);
    scanv(arr);
    sort(All(arr));
    int one=0, mone=0,sum=0;
    for(auto i:arr){
        sum+=i;
    }
    for(auto i: arr){
        if(i>=1) ++one;
        else ++mone;
    }
    if(sum >= 0 && (mone % 2 == 0)) cout << 0 << endl;
    else{
        int cnt=0;
        for(auto i:arr){
            sum -= i;
            sum += (-i);
            ++one;
            --mone;
            ++cnt;
            if(sum >= 0 && (mone % 2 == 0)){
                break;
            }
        }
        cout<<cnt<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}