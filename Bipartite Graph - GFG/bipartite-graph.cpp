//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    bool dfs(int node,int col, vector<int> adj[], int colour[]){
        colour[node] = col;
        for(auto it: adj[node]){
            if(colour[it] == -1){
                if(dfs(it,!col,adj,colour)==false) return false;   
            }
            else if(colour[it]==col) return false;
        }
        return true;
        
    }
	bool isBipartite(int V, vector<int>adj[]){
	    // Code here
	    int colour[V];
	    for(int i=0;i<V;i++){
	        colour[i] = -1;
	    }
        
        for(int i=0;i<V;i++){
            if(colour[i] == -1){
                if(dfs(i,0, adj, colour)==false) {
                    return false;
                }
            }
        }
        return true;
	}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}
// } Driver Code Ends