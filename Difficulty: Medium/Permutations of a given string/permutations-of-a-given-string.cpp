//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	    void permute(set<string> &ans, int l, int r, string S){
	        if(l==r) {
	            ans.insert(S);
	            return;
	        }
	        else{
	            for(int i=l;i<=r;i++){
	                swap(S[l],S[i]);
	                permute(ans,l+1,r,S);
	                swap(S[l], S[i]);
	            }
	        }
	    }
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    set<string> ans;
		    permute(ans,0,S.length()-1,S);
		    vector<string> result(ans.begin(),ans.end());
		    return result;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    sort(ans.begin(),ans.end());
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends