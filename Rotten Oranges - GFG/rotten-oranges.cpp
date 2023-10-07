//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) {
        // Code here
        int n = grid.size(); // rows
        int m = grid[0].size(); //cols
        queue<pair<pair<int,int>,int>> q; 
        int cntF =0;// {{r,c},t}
        int v[n][m]; // visited array 2D
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] == 2) {
                    q.push({{i,j},0});
                    v[i][j] = 2; // amrk in visited array
                }
                else{
                    v[i][j] = 0;
                }
                if(grid[i][j] == 1) cntF++;
            }
        }
        
        int delr[4] = {-1,0,1,0};
        int delc[4] = {0,+1,0,-1};
        int cnt =0;
        int tm=0;
        while(!q.empty()){
            int r = q.front().first.first;
            int c = q.front().first.second;
            int t = q.front().second;
            tm = max(tm,t);
            q.pop();
            for(int i=0;i<4;i++){
                // cout<<1;
                int nrow = r+delr[i];
                int ncol = c+delc[i];
                if(nrow<n && nrow>=0 && ncol<m && ncol>=0 && grid[nrow][ncol]==1 && v[nrow][ncol]==0 ){
                    q.push({{nrow,ncol},t+1});
                    cnt++;
                    v[nrow][ncol] = 2;
                    
                }
                
            }
            
        }
        // cout<<c;
        if(cnt!=cntF) return -1;
        return tm;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.orangesRotting(grid);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends