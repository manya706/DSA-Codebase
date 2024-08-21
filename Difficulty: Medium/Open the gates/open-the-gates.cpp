//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
public:
    bool dfs(vector<vector<char> >& board, string &s, int i , int j, int n, int m, int idx){
        if(i<0 || j<0 || i>=n || j>=m) return false;
         if (board[i][j] != s[idx]) return false;
    
    // Check if we have found the full string
        if (idx == s.size() - 1) return true;
        
        char t = board[i][j];
        board[i][j] = '*';
        bool a = dfs(board,s,i,j+1,n,m,idx+1);
        bool b = dfs(board,s,i,j-1,n,m,idx+1);
        bool c = dfs(board,s,i+1,j,n,m,idx+1);
        bool d = dfs(board,s,i-1,j,n,m,idx+1);
        bool e = dfs(board,s,i+1,j+1,n,m,idx+1);
        bool f = dfs(board,s,i-1,j+1,n,m,idx+1);
        bool g = dfs(board,s,i+1,j-1,n,m,idx+1);
        bool h = dfs(board,s,i-1,j-1,n,m,idx+1);
        board[i][j] = t;
        return a||b||c||d||e||f||g||h;
        
    }
	vector<string> openGates(vector<vector<char> >& map, vector<string>& gate_names) {
	    // Code here
	    int n = map.size();
	    int m = map[0].size();
	    vector<string> ans;
	    set<string> store;
	    for(int k=0;k<gate_names.size();k++){
	        string s = gate_names[k];
	        for(int i=0;i<n;i++){
    	        for(int j=0;j<m;j++){
    	            if(map[i][j]==s[0]){
    	                if(dfs(map,s, i, j, n, m, 0)){
    	                    store.insert(s);
    	                }
    	            }
    	        }
	        }
	    }
	    for(auto i:store){
	        ans.push_back(i);
	    }
	    return ans;
	    
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<string> gate_names;
        for (int i = 0; i < N; ++i) {
            string s;
            cin >> s;
            gate_names.push_back(s);
        }
        
        int R, C;
        cin >> R >> C;
        vector<vector<char> > map(R);
        for (int i = 0; i < R; i++) {
            map[i].resize(C);
            for (int j = 0; j < C; j++) cin >> map[i][j];
        }
        Solution obj;
        vector<string> output = obj.openGates(map, gate_names);
        if (output.size() == 0)
            cout << "-1";
        else {
            sort(output.begin(), output.end());
            for (int i = 0; i < output.size(); i++) cout << output[i] << " ";
        }
        cout << endl;
    }
}

// } Driver Code Ends