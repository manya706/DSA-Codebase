//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int dx[4] = {-1, 0, +1, 0};
    int dy[4] = {0, +1, 0, -1};
    int shortestDistance(int N, int M, vector<vector<int>> A, int X, int Y) {
        // code here
        queue<pair<pair<int,int>, int>> q;
        q.push({{0,0},0});
        vector<vector<int>> vis(N,vector<int>(M,0));
        vis[0][0] = 1;
        int ans=INT_MAX;
        while(!q.empty()){
            int n = q.size();
            int x = q.front().first.first;
            int y = q.front().first.second;
            int lvl = q.front().second;
            q.pop();
            if(x==X && y==Y){
                ans = min(ans,lvl);
                continue;
            }
            for(int i=0;i<4;i++){
                int nx= x+dx[i];
                int ny = y+dy[i];
                if(nx>=0 && ny>=0 && nx<N && ny<M && !vis[nx][ny] && A[nx][ny]==1){
                    vis[nx][ny] = 1;
                    q.push({{nx,ny},lvl+1});
                }
            }
        }
        if(A[0][0]==0) return -1;
        if(ans==INT_MAX) return -1;
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, x, y;
        cin >> N >> M;
        vector<vector<int>> v(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> v[i][j];
        cin >> x >> y;
        Solution ob;
        cout << ob.shortestDistance(N, M, v, x, y) << "\n";
    }
}
// } Driver Code Ends