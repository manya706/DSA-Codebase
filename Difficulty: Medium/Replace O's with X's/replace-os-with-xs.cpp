//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};
    bool isvalid(int i, int j, int n, int m){
        return (i>=0 && j>=0 && i<n && j<m);
    }
    bool isboundary(int i, int j, int n, int m){
        return (i==0 || j==0 || i==n-1 || j==m-1);
    }
    void setnotclosed(int i, int j, int n ,int m, vector<vector<char>> &mat){
        mat[i][j] = 'N';
        for(int x=0;x<4;x++){
            int ii = dx[x]+i;
            int jj = dy[x]+j;
            if(isvalid(ii,jj,n,m) && mat[ii][jj]=='O'){
                setnotclosed(ii, jj, n, m, mat);
            }
        }
    }
    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {
        // code here
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(isboundary(i,j,n,m) && mat[i][j]=='O'){
                    setnotclosed(i,j,n,m,mat);
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]=='O'){
                    mat[i][j] = 'X';
                } else if(mat[i][j]=='N'){
                    mat[i][j] = 'O';
                }
            }
        }
        return mat;
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<char>> mat(n, vector<char>(m, '.'));
        for(int i = 0;i < n;i++)
            for(int j=0; j<m; j++)
                cin>>mat[i][j];
        
        Solution ob;
        vector<vector<char>> ans = ob.fill(n, m, mat);
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < m;j++) {
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends