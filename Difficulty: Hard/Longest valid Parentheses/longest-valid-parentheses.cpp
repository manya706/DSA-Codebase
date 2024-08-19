//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maxLength(string S){
        // code here
        int ans=0;
        stack<int> st;
        int n = S.length();
        vector<int> dp(n,0);
        for(int i=0;i<n;i++){
            if(S[i]=='('){
                st.push(i);
            } else {
                if(!st.empty()){
                    int top = st.top();
                    st.pop();
                    if(top-1>=0){
                        dp[i] = dp[top-1]+(i-top+1);
                    } else dp[i] = (i-top+1);
                }
                ans = max(dp[i],ans);
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        
        Solution ob;
        cout<<ob.maxLength(S)<<"\n";
    }
    return 0;
}
// } Driver Code Ends