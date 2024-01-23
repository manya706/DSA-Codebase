//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    // int solve(int i,int prev_i, int arr[],vector<vector<int>> &dp,int n){
    //     if(i==n) return 0;
    //     if(dp[i][prev_i+1]!=-1) return dp[i][prev_i+1];
    //     int nottake = 0+solve(i+1,prev_i,arr,dp,n);
    //     int take = INT_MIN;
    //     if(prev_i==-1 || arr[prev_i]<arr[i]){
    //         take = 1+solve(i+1,i,arr,dp,n);
    //     }
    //     return dp[i][prev_i+1] = max(take,nottake);
    // }
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
       // your code here
    //   vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
    //   return solve(0,-1,a,dp,n);
        vector<int> ans;
        ans.push_back(a[0]);
        for(int i=1;i<n;i++){
            if(a[i]>ans.back()){
                ans.push_back(a[i]);
            }
            else{
                int l = lower_bound(ans.begin(),ans.end(),a[i])-ans.begin();
                ans[l] = a[i];
            }
        }
        return ans.size();
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t,n;
    cin>>t;
    while(t--)
    {
        //taking size of array
        cin>>n;
        int a[n];
        
        //inserting elements to the array
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        //calling method longestSubsequence()
        cout << ob.longestSubsequence(n, a) << endl;
    }
}

// } Driver Code Ends