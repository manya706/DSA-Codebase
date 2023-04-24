// https://leetcode.com/problems/minimum-insertion-steps-to-make-a-string-palindrome/submissions/939001162/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int f(string s, string t,vector<vector<int>> &dp){
        int n = s.length();
        for(int i = 0; i <= n; i++){
            for(int j = 0; j <= n; j++){
                if(i == 0 || j == 0)
                dp[i][j] = 0;
            }
        }

        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                if(s[i-1] == t[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                } else{
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[n][n];
    }
    int minInsertions(string s) {
        int n = s.length();
        string t = s;
        reverse(t.begin(),t.end());
        vector<vector<int>> dp(n+1,vector<int> (n+1,-1));
        return n-f(s,t,dp);
    }
};