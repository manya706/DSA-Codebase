//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	int timer = 1;
    void dfs(int node, int parent, vector<int> adj[], vector<int> &vis, int tin[],
    int low[], int &res, int c, int d){
        vis[node] = 1;
        tin[node] = low[node] = timer;
        timer++;
        for(auto it: adj[node]){
            if(it==parent) continue;
            if(vis[it]==0){
                dfs(it, node, adj,vis,tin,low,res,c,d);
                low[node] = min(low[it],low[node]);
                if(low[it]>tin[node]){
                     if((it == c && node == d) || (it==d && node==c)) {
                        res = 1;
                    }
                }
            }
            else {
                low[node] = min(low[it],low[node]);
            }
        }
    }
    //Function to find if the given edge is a bridge in graph.
    int isBridge(int V, vector<int> adj[], int c, int d) 
    {
        // Code here
        
        int tin[V];
        int low[V];
        vector<int> vis(V,0);
        int res=0;
        for(int i=0;i<V;i++){
            if(!vis[i]){
                dfs(i,-1,adj,vis,tin,low,res,c,d);       
            }
        }
         
        return res;
    }
};

//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        int i=0;
        while (i++<E) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back (v);
            adj[v].push_back (u);
        }
        
        int c,d;
        cin>>c>>d;
        
        Solution obj;
    	cout << obj.isBridge(V, adj, c, d) << "\n";
    }

    return 0;
}


// } Driver Code Ends