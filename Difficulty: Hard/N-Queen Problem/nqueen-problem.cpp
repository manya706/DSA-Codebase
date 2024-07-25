//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    bool isSafe(int row, int col, vector<string> board, int n){
        int duprow = row;
        int dupcol = col;
        while(col>=0 && row>=0){
            if(board[row][col]=='Q') return false;
            col--;
            row--;
        }
        row = duprow;
        col = dupcol;
        while(col>=0){
            if(board[row][col]=='Q') return false;
            col--;
        }
        row = duprow;
        col = dupcol;
        while(col>=0 && row<n){
            if(board[row][col]=='Q') return false;
            row++;
            col--;
        }
        return true;
    }
    void solve(int col, vector<vector<int>> &ans, vector<string> board, int n){
        if(col==n){
            ans.push_back(helper(board,n));
            return;
        }
        for(int row=0;row<n;row++){
            if(isSafe(row,col,board,n)){
                board[row][col] = 'Q';
                solve(col+1,ans,board,n);
                board[row][col] = '.';
            }
            
        }
        
    }
    vector<int> helper (vector<string> board, int n){
        vector<int> res;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='Q') res.push_back(j+1);
            }
        }
        return res;
    }
    vector<vector<int>> nQueen(int n) {
        // code here
        vector<vector<int>> ans;
        vector<string> board(n+1);
        string s (n,'.');
        for(int i=0;i<n;i++){
            board[i] = s;
        }
        solve(0, ans,board,n);
        sort(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<vector<int>> ans = ob.nQueen(n);
        if(ans.size() == 0)
            cout<<-1<<"\n";
        else {
            for(int i = 0;i < ans.size();i++){
                cout<<"[";
                for(int u: ans[i])
                    cout<<u<<" ";
                cout<<"] ";
            }
            cout<<endl;
        }
    }
    return 0;
}
// } Driver Code Ends