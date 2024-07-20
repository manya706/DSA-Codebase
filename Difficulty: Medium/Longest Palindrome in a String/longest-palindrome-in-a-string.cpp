//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string longestPalin (string s) {
        // code here
        // using 2-D DP
        int count = -1;
        string ans = "";
        int n = s.length();
        bool dp[n][n];
        for(int g=0; g<n;g++){
            for( int i=0,j=g;j<n;i++, j++){
                if(g==0) dp[i][j] = true;
                else if(g==1) dp[i][j] = (s[i]==s[j]);
                else dp[i][j] = (s[i]==s[j] && dp[i+1][j-1]);
                if(dp[i][j] && count < j-i+1){
                    ans = s.substr(i,j-i+1);
                    count = ans.length();
                }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends