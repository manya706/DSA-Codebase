//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    bool dfs(vector<vector<char>>& board, string &s, int i, int j, int n, int m, int idx){
        if(i<0 || j<0 || i>=n || j>=m) return false;
        if(s[idx]!=board[i][j]) return false;
        if(s.size()-1 == idx) return true;
        char t=board[i][j];
        board[i][j] = '*';
        bool a = dfs(board,s,i,j+1,n,m,idx+1);
        bool b = dfs(board,s,i,j-1,n,m,idx+1);
        bool c = dfs(board,s,i+1,j,n,m,idx+1);
        bool d = dfs(board,s,i-1,j,n,m,idx+1);
        // bool e = dfs(board,s,i+1,j+1,n,m,idx+1);
        // bool f = dfs(board,s,i-1,j+1,n,m,idx+1);
        // bool g = dfs(board,s,i+1,j-1,n,m,idx+1);
        // bool h = dfs(board,s,i-1,j-1,n,m,idx+1);
        board[i][j] = t;
        return a||b||c||d;
    }
    bool isWordExist(vector<vector<char>>& board, string word) {
        // Code here
        int n = board.size();
        int m = board[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(dfs(board, word, i, j, n , m, 0)){
                    return true;
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
		int n, m;
		cin >> n >> m;
		vector<vector<char>>board(n, vector<char>(m, '*'));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)
				cin >> board[i][j];
		string word;
		cin >> word;
		Solution obj;
		bool ans = obj.isWordExist(board, word);
		if(ans)
			cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}
// } Driver Code Ends