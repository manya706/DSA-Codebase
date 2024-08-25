//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    string Reduced_String(int k,string s){
        // Your code goes here
        if(k==1) return "";
        stack<pair<char,int>> st;
        st.push({s[0],1});
        for(int i=1;i<s.size();i++){
            if(!st.empty() && (s[i]==st.top().first)){
                st.push({s[i], st.top().second+1});
            }
            else st.push({s[i],1});
            if(st.top().second == k){
                int t = k;
                while(t--){
                    st.pop();
                }
            }
        }
        string ans="";
        while(!st.empty()){
            ans += st.top().first;
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }


};

//{ Driver Code Starts.

int main() {
    
    
    int t;cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        string s;
        cin>>s;
        Solution obj;
        cout<<obj.Reduced_String(k,s)<<"\n";
        
    }
    
	return 0;
}
// } Driver Code Ends