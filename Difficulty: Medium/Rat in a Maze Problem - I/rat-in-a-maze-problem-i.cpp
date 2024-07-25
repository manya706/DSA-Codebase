//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
    public:
    string direction = "DLRU";

    // Arrays to represent change in rows and columns
    int dr[4] = { 1, 0, 0, -1 };
    int dc[4] = { 0, -1, 1, 0 };
  
    bool isValid(int row, int col,vector<vector<int>>& mat, int n){
        if(row<n && col>=0 && col<n && row>=0 && mat[row][col]==1){
            return true;
        }
        return false;
    }
    void Path(vector<vector<int>> &mat, int row, int col, vector<string> &ans, string &s){
        if(row==mat.size()-1 && col == mat[0].size()-1){
            ans.push_back(s);
        }
        mat[row][col] = 0;
        for(int i=0;i<4;i++){
            int nextrow = row+dr[i];
            int nextcol = col+dc[i];
            if(isValid(nextrow, nextcol,mat, mat.size())){
                s += direction[i];
                Path(mat, nextrow, nextcol, ans, s);
                s.pop_back();
            }
        }
        mat[row][col] = 1;
    }
    vector<string> findPath(vector<vector<int>> &mat) {
        // Your code goes here
        vector<string> ans;
        string s="";
        int n = mat.size();
        if(mat[0][0] == 1 && mat[n-1][n-1] == 1) {
            Path(mat, 0, 0, ans, s);
        }
        if (ans.empty()) {
            ans.push_back("-1");
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++)
                cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends