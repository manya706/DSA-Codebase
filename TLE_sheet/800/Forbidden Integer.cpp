#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
#define pb push_back
#define ll long long int
#define sz(x)             int ((x).size())
#define All(x)            (x).begin(), (x).end()
#define scanv(x)          for(auto &i: x) cin >> i
void solve(){
    int n,k,x;
    cin>>n>>k>>x;
    if(x == 1 && k == 1) cout << "NO" << endl; 
		else if(x == 1 && k == 2 && n % 2) cout << "NO" << endl;
		else{
			if(x != 1){
				cout << "YES" << endl;
				cout << n << endl; 
				for(int i = 1; i <= n; ++i) cout << 1 << ' '; cout << endl;
			}else{
				if(n % 2){
					cout << "YES" << endl;
					cout << 1 + (n - 3) / 2 << endl;
					cout << 3 << ' ';
					n -= 3;
					for(int i = 1; i <= n / 2; ++i) cout << 2 << ' '; cout << endl;
				}else{
					cout << "YES\n";
					cout << n / 2 << endl;
					for(int i = 1; i <= n / 2; ++i) cout << 2 << ' '; cout << endl;
				}
			}
		}
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}