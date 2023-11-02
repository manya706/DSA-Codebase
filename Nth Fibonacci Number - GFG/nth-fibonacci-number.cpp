//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int solve(vector<int>&dp, int i){
        if(i==0) return 0;
        if(i==1 || i==2) return 1;
        if(dp[i]!= -1) return dp[i];
        dp[i] = (solve(dp,i-1)+solve(dp,i-2))%(1000000007);
        return dp[i];
    }
    int nthFibonacci(int n){
        // code here
        vector<int> dp(n+1,-1);
        dp[0] = 0;
        dp[1] = 1;
        return solve(dp,n);
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
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends