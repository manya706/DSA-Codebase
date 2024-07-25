//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    void dfs(vector<vector<int>>& adj,int i,int V,vector<bool> &vis){
        vis[i]=true;
        for(int j=0;j<V;j++){
            if(adj[i][j]==1 && !vis[j]) dfs(adj,j,V,vis);
        }
    }
    int numProvinces(vector<vector<int>> adj, int V) {
        // code here
        if(V==1) return 1;
        int p=0;
        vector<bool> vis(V,false);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                p++;
                dfs(adj,i,V,vis);
            }
        }
        return p;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}
// } Driver Code Ends