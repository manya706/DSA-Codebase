#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
#define pb push_back
#define ll long long int
int main(){
    int n;
    cin>>n;
    vi digits;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        x = abs(x);
        digits.pb(x);
    }
    sort(digits.begin(),digits.end());
    cout<<abs(digits[0]);
}