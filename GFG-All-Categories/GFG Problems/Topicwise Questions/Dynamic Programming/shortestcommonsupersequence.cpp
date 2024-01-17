// https://leetcode.com/problems/shortest-common-supersequence/submissions/939096391/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string shortestCommonSupersequence(string str1, string str2) {
        int n = str1.size();
        int m = str2.size();
        
        string ans="";
        vector<vector<int>> dp(n+1,vector<int>(m+1,0));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(str1[i-1]==str2[j-1]) {
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
                }
            }
        }
        int a=n, b=m;
        while(a>0 && b>0){
            if(str1[a-1]==str2[b-1]){
                ans += str1[a-1];
                a--;
                b--;
            }
            else if(dp[a-1][b]>dp[a][b-1]){
                ans+=str1[a-1];
                a--;
            }
            else{
                ans+=str2[b-1];
                b--;
            }
        }
        while(a>0) {
            ans+=str1[a-1];
            a--;
        }
        while(b>0){
            ans+=str2[b-1];
            b--;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};