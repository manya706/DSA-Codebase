//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    void bfs(vector<int>&KnightPos,vector<int>&TargetPos,int N,int&ans,vector<vector<int>>&vis){
        int i = KnightPos[0];
        int j = KnightPos[1];
        int dirX[]={1,2,2,1,-1,-2,-2,-1};
        int dirY[]={2,1,-1,-2,-2,-1,1,2};
        queue<pair<int,pair<int,int>>> q;
        q.push({0, {i,j}});
        while(!q.empty()){
            int lvl = q.front().first;
            int x = q.front().second.first;
            int y = q.front().second.second;
            q.pop();
            vis[x][y] = 1;
            for(int k=0;k<8;k++){
                int nx = x+dirX[k];
                int ny = y+dirY[k];
                if(nx==TargetPos[0] && ny==TargetPos[1]){
                    ans=lvl+1;
                    return;
                } else {
                    if(nx>=1 && nx<=N && ny>=1 && ny<=N && !vis[nx][ny]){
                        q.push({lvl+1,{nx,ny}});
                        vis[nx][ny] = 1;
                    }
                }
            }
        }
    }
    //Function to find out minimum steps Knight needs to reach target position.
	int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int N)
	{
	    // Code here
	    vector<vector<int>> vis(N+1, vector<int>(N+1));
	    int ans=-1;
	    bfs(KnightPos, TargetPos, N, ans, vis);
	    return ans==-1?0:ans;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		vector<int>KnightPos(2);
		vector<int>TargetPos(2);
		int N;
		cin >> N;
		cin >> KnightPos[0] >> KnightPos[1];
		cin >> TargetPos[0] >> TargetPos[1];
		Solution obj;
		int ans = obj.minStepToReachTarget(KnightPos, TargetPos, N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends