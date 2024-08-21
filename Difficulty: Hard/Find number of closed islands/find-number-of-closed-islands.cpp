//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
    public:
    void dfs(vector<vector<int> >& matrix,
         vector<vector<bool> >& visited, int x, int y,
         int n, int m)
{
    if (x < 0 || y < 0 || x >= n || y >= m
        || visited[x][y] == true || matrix[x][y] == 0)
        return;
 
    // Mark land as visited
    visited[x][y] = true;
 
    // Traverse to all adjacent elements
    dfs(matrix, visited, x + 1, y, n, m);
    dfs(matrix, visited, x, y + 1, n, m);
    dfs(matrix, visited, x - 1, y, n, m);
    dfs(matrix, visited, x, y - 1, n, m);
}
    int closedIslands(vector<vector<int>>& matrix, int n, int m) {
        // Code here
        vector<vector<bool> > visited(n,
                                  vector<bool>(m, false));
 
    // Mark visited all lands
    // that are reachable from edge
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
     
                // Traverse corners
                if ((i * j == 0 || i == n - 1 || j == m - 1)
                    and matrix[i][j] == 1
                    and visited[i][j] == false)
                    dfs(matrix, visited, i, j, n, m);
            }
        }
        int result = 0;
 
        for (int i = 0; i < n; ++i) {
     
            for (int j = 0; j < m; ++j) {
     
                // If the land not visited
                // then there will be atleast
                // one closed island
                if (visited[i][j] == false
                    and matrix[i][j] == 1) {
     
                    result++;
     
                    // Mark all lands associated
                    // with island visited.
                    dfs(matrix, visited, i, j, n, m);
                }
            }
        }
     
        // Return the final count
        return result;
    }
};

//{ Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
        int N, M;
        cin >> N >> M;
        vector<vector<int>>matrix(N, vector<int>(M, 0));
        for(int i=0; i<N; i++)
            for(int j=0; j<M; j++)
                cin >> matrix[i][j];
                
        Solution obj;
        int ans = obj.closedIslands(matrix, N, M);
        cout << ans << "\n";
    }
	
	return 0;
	
}


// } Driver Code Ends