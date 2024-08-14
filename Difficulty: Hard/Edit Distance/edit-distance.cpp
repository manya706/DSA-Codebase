//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int solve(int n, int m, string str1, string str2, vector<vector<int>> &dp){
        if(n==0) return m;
        if(m==0) return n;
        if(dp[n][m]!=-1) return dp[n][m];
        if(str1[n-1]==str2[m-1]){
            return dp[n][m] = solve(n-1, m-1, str1, str2, dp);
        } else {
            int ins, del, rep;
            ins = solve(n-1,m,str1,str2,dp);
            del = solve(n, m-1,str1,str2,dp);
            rep = solve(n-1,m-1,str1,str2,dp);
            return dp[n][m] = min(ins, min(rep,del))+1;
        }
    }
    int editDistance(string str1, string str2) {
        // Code here
        int n = str1.length();
        int m = str2.length();
        vector<vector<int>> dp(n+1, vector<int>(m+1,-1));
        return solve(n, m, str1, str2, dp);
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends