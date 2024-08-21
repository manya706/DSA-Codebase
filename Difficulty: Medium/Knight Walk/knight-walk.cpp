//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    void bfs(vector<int>&KnightPos, vector<int>&TargetPos, int N, vector<vector<int>> &vis, int &ans){
        int ix = KnightPos[0];
        int jx = KnightPos[1];
        int dirX[]={1,2,2,1,-1,-2,-2,-1};
        int dirY[]={2,1,-1,-2,-2,-1,1,2};
        queue<pair<int,pair<int,int>>> q;
        q.push({0, {ix,jx}});
        while(!q.empty()){
            int x = q.front().second.first;
            int y = q.front().second.second;
            int lvl = q.front().first;
            q.pop();
            for(int i=0;i<8;i++){
                int nx = x+dirX[i];
                int ny = y+dirY[i];
                if(TargetPos[0]==nx && TargetPos[1]==ny){
                    ans=lvl+1;
                    return;
                } else {
                    if(nx>=0 && ny>=0 && nx<N && ny<N && !vis[nx][ny]){
                        q.push({lvl+1, {nx,ny}});
                        vis[nx][ny] = 1;
                    }
                }
            }
        }
    }
	int minStepToReachTarget(vector<int>&KnightPos, vector<int>&TargetPos, int N){
	    // Code here
	    int ans=-1;
	    vector<vector<int>> vis(N+1, vector<int>(N+1));
	    bfs(KnightPos, TargetPos, N, vis, ans);
	    return  ans==-1?0:ans;
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