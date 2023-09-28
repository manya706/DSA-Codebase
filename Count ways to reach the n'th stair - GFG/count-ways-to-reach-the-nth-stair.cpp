//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    int solver(vector<int> &dp, int n){
        if(n<=1) return 1;
        if(dp[n]!=-1) return dp[n];
        return dp[n] = (solver(dp,n-1)+solver(dp,n-2)) % 1000000007;
    }
    //Function to count number of ways to reach the nth stair.
    int countWays(int n)
    {
        // your code here
        vector<int> dp(n+1,-1);
        return solver(dp, n);
    }
};



//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}

// } Driver Code Ends