// https://leetcode.com/problems/longest-palindromic-subsequence/submissions/938998390/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    // declare a dp
    int dp[1005][1005];
    int helper(string& str, int left, int right)
    {
        // base case
        // 2 pointers defined
        if(left > right)
            return 0;
        
        if(left == right)
            return 1;
        
        // if already calculated
        if(dp[left][right] != -1)
            return dp[left][right];
        
        // if characters are same
        
        if(str[left] == str[right])
            return dp[left][right] = 2 + helper(str, left + 1, right - 1);
        
        else  // if characters are not same
        {
            return dp[left][right] = max(helper(str, left + 1, right), helper(str, left, right - 1));
        }
    }
    
    int longestPalindromeSubseq(string str) {
        
        int n = str.size();
        
        // initialize dp
        memset(dp, -1, sizeof(dp));
        
        return helper(str, 0, n - 1);
    }
};