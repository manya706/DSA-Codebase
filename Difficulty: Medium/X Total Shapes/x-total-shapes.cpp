//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    void dfs(int i, int j, vector<vector<char>>& grid, vector<vector<int>>& vis, int n,int m){
        if(i<0 || j<0 || i>=n || j>=m || vis[i][j]!=0 || grid[i][j] =='O'){
            return ;
        }
        vis[i][j] = true;
        dfs(i+1, j, grid,vis,n,m);
        dfs(i-1, j, grid,vis,n,m);
        dfs(i, j+1, grid,vis,n,m);
        dfs(i, j-1, grid,vis,n,m);
    }
    //Function to find the number of 'X' total shapes.
    int xShape(vector<vector<char>>& grid) 
    {
        // Code here
        int c=0;
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='X' && !vis[i][j]){
                    c++;
                    dfs(i, j, grid, vis,n, m);
                }
            }
        }
        return c;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>grid(n, vector<char>(m, '#'));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.xShape(grid);
		cout << ans <<'\n';
	}
	return 0;
}
// } Driver Code Ends