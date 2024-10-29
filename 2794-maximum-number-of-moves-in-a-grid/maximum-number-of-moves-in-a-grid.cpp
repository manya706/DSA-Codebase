class Solution {
public:
    int helper(int i, int j, int prev, vector<vector<int>>& grid, vector<vector<int>> &dp, int n, int m){
        if (i<0 || j<0 ||i>=n || j>=m) return 0;
        int x=grid[i][j];
        if (x<=prev) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        
        return dp[i][j]=1+max({helper(i-1, j+1, x, grid,dp,n,m),
        helper(i, j+1, x, grid, dp, n, m),
        helper(i+1, j+1, x, grid, dp, n, m)});
    }
    int maxMoves(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> dp(n, vector<int>(m,-1));
        int ans=0;
        for(int i=0;i<n;i++){
            ans = max(ans, helper(i,0,-1,grid,dp,n,m));
        }
        return ans-1;
    }
};