#include<bits/stdc++.h>
using namespace std;
int longestsubstring(string s1, string s2){
    int n = s1.length();
    int m = s2.length();
    int ans=0;
    vector<vector<int>> dp(n+1, vector<int> (m+1,0));
    for(int i=1;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(s1[i-1]==s2[j-1]){
                dp[i][j] = 1+ dp[i-1][j-1];
                ans = max(ans, dp[i][j]);
            }
        }
    }
    return ans;
}
int main(){
    string s1= "abcde";
    string s2= "abcze";
    cout<<longestsubstring(s1,s2)<<endl;
}