//{ Driver Code Starts
#include <bits/stdc++.h>
const int mod = 1e9 + 7;
using namespace std;


// } Driver Code Ends
// function to find longest common subsequence

class Solution {
  public:
    int solve(int i, int j, vector<vector<int>> &dp, string &s1 , string &s2){
        if(i < 0 || j < 0) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(s1[i]==s2[j]) {
            return dp[i][j] = 1+solve(i-1, j-1,dp,s1,s2);
        } else{
            return dp[i][j] = max(solve(i-1,j,dp,s1,s2), solve(i,j-1,dp,s1,s2));
        }
    }
    // Function to find the length of longest common subsequence in two strings.
    int lcs(int n, int m, string str1, string str2) {
        // your code here
        // using dp
        vector<vector<int>> dp (n+1, vector<int> (m+1,-1));
        return solve(n-1,m-1, dp, str1, str2);
    }
};


//{ Driver Code Starts.
int main() {
    int t, n, m;
    cin >> t;
    while (t--) {
        cin >> n >> m; // Take size of both the strings as input
        string str1, str2;
        cin >> str1 >> str2; // Take both the string as input
        Solution ob;
        cout << ob.lcs(n, m, str1, str2) << endl;
    }
    return 0;
}

// } Driver Code Ends