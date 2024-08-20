//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	bool isPossible(int N,int P, vector<pair<int, int> >& prerequisites) {
	    // Code here
	    // creating directed graph
	    vector<int> adj[N];
	    for(auto i: prerequisites){
	        adj[i.first].push_back(i.second);
	    }
	    
	    queue<int>q;
	    vector<int> indegree(N,0);
	    for(int i=0;i<N;i++){
	        for(auto it: adj[i]){
	            indegree[it]++;
	        }
	    }
	    for(int i=0;i<N;i++){
	         if(indegree[i]==0){
	             q.push(i);
	         }   
	    }
	    vector<int> topo;
	    while(!q.empty()){
	        int node = q.front();
	        q.pop();
	        topo.push_back(node);
	        for(auto it:adj[node]){
	            indegree[it]--;   
	            if(indegree[it]==0){
	                q.push(it);
	            }
	        }
	    }
	    if(topo.size()==N) return true;
	    return false;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
    	int N, P;
        vector<pair<int, int> > prerequisites;
        cin >> N;
        cin >> P;
        for (int i = 0; i < P; ++i) {
            int x, y;
            cin >> x >> y;
            prerequisites.push_back(make_pair(x, y));
        }
        // string s;
        // cin>>s;
        Solution ob;
        if (ob.isPossible(N,P, prerequisites))
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
	}
	return 0;
}
// } Driver Code Ends