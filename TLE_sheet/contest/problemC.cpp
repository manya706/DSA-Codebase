#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
#define pb push_back
#define ll long long int
#define sz(x)             int ((x).size())
#define All(x)            (x).begin(), (x).end()
#define scanv(x)          for(auto &i: x) cin >> i
void convert_to_12_hour_format(string time) {
    int hours = stoi(time.substr(0, 2));
    int minutes = stoi(time.substr(3));

    string period = "AM";
    if (hours >= 12) {
        period = "PM";
        if (hours > 12) {
            hours -= 12;
        }
    }
    if (hours == 0) {
        hours = 12;
    }

    cout << ((hours < 10) ? "0" : "") << hours << ":" << ((minutes < 10) ? "0" : "") << minutes << " " << period << endl;
}
void solve(){
    string n;
    cin>>n;
    convert_to_12_hour_format(n);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}