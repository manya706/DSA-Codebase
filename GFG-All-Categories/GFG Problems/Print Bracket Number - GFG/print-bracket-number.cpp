//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	

	vector<int> bracketNumbers(string S)
	{
	    // Your code goes here
	    int c=0;
	    stack<int> st;
	    vector<int> v;
	    for(int i=0;i<S.length();i++){
	        if(S[i]=='('){
	            c =c+1;
	            v.push_back(c);
	            st.push(c);
	        }
	        if(S[i]==')')
	        {   
	            v.push_back(st.top());
	            st.pop();
	        }
	    }
	    return v;
	}
};

//{ Driver Code Starts.

int main() 
{
   	
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	string tc;
   	getline(cin, tc);
   	t = stoi(tc);
   	while(t--)
   	{
   		string s;
   		getline(cin, s);

   	    Solution ob;

   		vector<int> ans = ob.bracketNumbers(s);

   		for(auto i:ans)
   			cout << i << " ";

   		cout << "\n";
   	}

    return 0;
}
// } Driver Code Ends