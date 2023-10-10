//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  private:
    void bfs(int row, int col, vector<vector<int>> &vis, vector<vector<char>> &grid){
        vis[row][col] = 1;
        queue<pair<int,int>> q;
        int n = grid.size();
        int m = grid[0].size();
        q.push({row,col});
        while(!q.empty()){
            int r = q.front().first;
            int c = q.front().second; // storing row and col position to then check its 8 neighbours
            q.pop();
            for(int delrow = -1; delrow<=1; delrow++){
                for(int delcol = -1; delcol<=1; delcol++){
                    // this covers all 8 neighbours we have to check for land
                    int nrow = r+delrow;
                    int ncol = c+delcol;
                    if(nrow>=0 && nrow<n && ncol<m && ncol>=0 && !vis[nrow][ncol] && grid[nrow][ncol] == '1'){
                        vis[nrow][ncol] = 1;
                        q.push({nrow,ncol});
                    }
                }
            }
        }
    }
  public:
    // Function to find the number of islands.
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        // doing it using bfs
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m,0)); // visited 2D vector
        int count=0; // storing number of islands
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && grid[i][j]=='1'){
                    count++;
                    bfs(i,j,vis,grid); // finding out number of starting points
                }
            }
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends