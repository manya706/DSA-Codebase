// lets hope for the best, first contest 28-03-2024 20:11
// Stair, Peak, or Neither?
#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
#define pb push_back
#define ll long long int
#define sz(x)             int ((x).size())
#define All(x)            (x).begin(), (x).end()
#define scanv(x)          for(auto &i: x) cin >> i
void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a<b && b<c){
        cout<<"STAIR"<<endl;
    }
    else if(a<b && c<b){
        cout<<"PEAK"<<endl;
    }
    else{
        cout<<"NONE"<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}