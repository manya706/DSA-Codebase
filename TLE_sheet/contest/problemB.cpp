#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
#define pb push_back
#define ll long long int
#define sz(x)             int ((x).size())
#define All(x)            (x).begin(), (x).end()
#define scanv(x)          for(auto &i: x) cin >> i
void generate_checkerboard(int n) {
    for (int i = 0; i < 2 * n; ++i) {  // Iterate through rows
        for (int j = 0; j < 2 * n; ++j) {  // Iterate through columns
            // Determine if the cell should contain '#' or '.'
            if ((i / 2 + j / 2) % 2 == 0) {
                cout << "#";
            } else {
                cout << ".";
            }
        }
        cout << endl;  // Move to the next line after printing each row
    }
}
void solve(){
    int n;
    cin>>n;
    generate_checkerboard(n);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}