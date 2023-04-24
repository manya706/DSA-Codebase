// https://leetcode.com/problems/delete-operation-for-two-strings/submissions/939072899/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestcommonsubsequence(string s1, string s2, vector<vector<int>> &dp, int i, int j){
        if(i<0 || j<0) return 0;
        if(dp[i][j]!= -1) return dp[i][j];
        // match condition
        if(s1[i]==s2[j]) return dp[i][j] = 1+ longestcommonsubsequence(s1,s2,dp,i-1,j-1);
        // not match condition
        return dp[i][j] = 0+max(longestcommonsubsequence(s1,s2,dp,i-1,j), longestcommonsubsequence(s1,s2,dp,i,j-1));
    }
    int minDistance(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();
        vector<vector<int>> dp(n+1, vector<int>(m+1,-1));
        return (n+m)-2*(longestcommonsubsequence(word1,word2,dp,n-1,m-1));
    }
};
// OPTIMIZED APPROACH
class Solution {
public:
    int longestcommonsubsequence(string s1, string s2, vector<vector<int>> &dp){
        int n= s1.size();
        int m = s2.size();
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s1[i-1]==s2[j-1]) {
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
                }
            }
        }
        return dp[n][m];   
    }
    int minDistance(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();
        vector<vector<int>> dp(n+1, vector<int>(m+1,0));
        return (n+m)-2*(longestcommonsubsequence(word1,word2,dp));
    }
};