//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    vector<int>dx = {-1,0,1,0};
    vector<int>dy = {0,-1,0,1};
    bool isvalid(int nx, int ny, int n, int m){
        return (nx>=0 && nx<n && ny>=0 && ny<m);
    }
    //Function to find whether a path exists from the source to destination.
    bool is_Possible(vector<vector<int>>& grid) 
    {
        //code here
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<int,int>> q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1) q.push({i,j});
            }
        }
        while(!q.empty()){
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            for(int i=0;i<4;i++){
                int n_x = x+dx[i];
                int n_y = y+dy[i];
                if(isvalid(n_x,n_y,n,m)){
                    if(grid[n_x][n_y]==2) return true;
                    if(grid[n_x][n_y]==3) {
                        grid[n_x][n_y] = 1;
                        q.push({n_x,n_y});
                    }
                }
            }
        }
        return false;
    }
    
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>grid(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		bool ans = obj.is_Possible(grid);
		cout << ((ans) ? "1\n" : "0\n");
	}
	return 0;
}
// } Driver Code Ends