//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int func(int i, int j, int n, int m, vector<vector<int>> &M, vector<vector<int>> &dp){
        if(i<0 || j<0 || i>=n || j>=m){
            return 0;
        }
        if(dp[i][j]!=-1) return dp[i][j];
        int ru = M[i][j] + func(i-1, j+1, n,m,M,dp);
        int r = M[i][j] + func(i, j+1, n, m, M, dp);
        int rd = M[i][j] + func(i+1, j+1, n, m, M, dp);
        return dp[i][j] = max(ru, max(rd,r));
    }
    int maxGold(int n, int m, vector<vector<int>> M)
    {
        // code here
        vector<vector<int>> dp(n+1, vector<int>(m+1, -1));
        int ans=0;
        for(int i=0;i<n;i++){
            ans = max(ans, func(i, 0, n, m, M, dp));
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<int>> M(n, vector<int>(m, 0));
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++)
                cin>>M[i][j];
        }
        
        Solution ob;
        cout<<ob.maxGold(n, m, M)<<"\n";
    }
    return 0;
}
// } Driver Code Ends