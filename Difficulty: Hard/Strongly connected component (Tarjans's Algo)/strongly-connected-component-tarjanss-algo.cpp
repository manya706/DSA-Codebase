//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
	public:
    //Function to return a list of lists of integers denoting the members 
    //of strongly connected components in the given graph.
    void dfs(int node, vector<int> adj[], vector<int> &vis, stack<int> &st){
            vis[node] = 1;
            
            for(auto it: adj[node]){
                if(!vis[it]){
                    dfs(it,adj,vis,st);
                }
            }
            st.push(node);
        }
	public:
	void dfs2(int node, vector<vector<int>> &adjT, vector<int> &vis, vector<int> &res){
    	    vis[node] =1;
    	    res.push_back(node);
    	    for(auto it:adjT[node]){
    	        if(!vis[it]){
    	            dfs2(it,adjT,vis,res);
    	        }
    	    }
    	}
	//Function to find number of strongly connected components in the graph.
    vector<vector<int>> tarjans(int V, vector<int> adj[])
    {
        //code here
        vector<int> vis(V,0);
        stack<int> st;
        // in stack we have stored the nodes sorted according to their finished time
        for(int i=0;i<V;i++){
            if(!vis[i]){
                dfs(i, adj, vis, st);
            }
        }
        vector<vector<int>> adjT(V);
        for(int i=0;i<V;i++){
            vis[i] = 0;
            for(auto it:adj[i]){
                adjT[it].push_back(i);
            }
        }
        // second dfs call to calculate number of SCC
         vector<int>res;
       vector<vector<int>>ans;
       while(!st.empty()) {
           int top = st.top();
           st.pop();
           if(!vis[top]) {
               dfs2(top,adjT,vis,res);
                sort(res.begin(),res.end());
                ans.push_back(res);
           }
           res.clear();
       }
       sort(ans.begin(),ans.end());
       return ans;
        
    }
};

//{ Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for(int i = 0; i < E; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        vector<vector<int>> ptr = obj.tarjans(V, adj);

        for(int i=0; i<ptr.size(); i++)
        {
            for(int j=0; j<ptr[i].size(); j++)
            {
                if(j==ptr[i].size()-1)
                    cout<<ptr[i][j];
                else
                    cout<<ptr[i][j]<<" ";
            }
            cout<<',';
        }
        cout<<endl;
    }

    return 0;
}


// } Driver Code Ends