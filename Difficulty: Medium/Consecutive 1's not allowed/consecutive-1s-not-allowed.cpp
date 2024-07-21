//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	// #define ll long long
	ll countStrings(int n) {
	    // code here
	    if (n == 0) return 0;
        if (n == 1) return 2;  // "0" and "1"
	    ll a[n], b[n];
	    a[0] = 1;
	    b[0] = 1;
	    for(int i=1;i<n;i++){
	        a[i] = (a[i-1]+b[i-1])% 1000000007;
	        b[i] = (a[i-1])% 1000000007;
	    }
	    return (a[n-1]+b[n-1])%1000000007;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.countStrings(n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends