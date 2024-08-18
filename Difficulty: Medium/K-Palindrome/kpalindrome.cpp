//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
int lcs(string &str, string &rev, int s_idx, int r_idx, vector<vector<int>> &dp)
    {
        if(s_idx < 0 || r_idx < 0 )
            return 0;
            
        if(dp[s_idx][r_idx] != -1)
            return dp[s_idx][r_idx];
            
        int ans = 0;
 
        if(str[s_idx] == rev[r_idx])
        {
            ans = 1 + lcs(str,rev,s_idx-1, r_idx-1, dp);
        }
        else
        {
            ans = max( lcs(str, rev, s_idx-1, r_idx, dp), lcs(str, rev, s_idx, r_idx - 1, dp));
        }
        return dp[s_idx][r_idx] = ans;
        
    }
    int kPalindrome(string str, int n, int k)
    {
        // code here
         vector<vector<int>> dp(n+1, vector<int>(n+1,-1));
         string rev = str;
         reverse(rev.begin(), rev.end());
         int l = lcs(str,rev,n-1,n-1,dp);
         return (n-l > k) ? 0 : 1;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.kPalindrome(str, n, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends