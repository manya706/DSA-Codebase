//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int solve(int idx,int flag, int k,int n ,int K,int arr[], vector< vector< vector<int>>>&dp ){
        if(k>K) return 0;
        if(idx==n) return 0;
        if(dp[idx][k][flag]!=-1) return dp[idx][k][flag];
        int profit=0;
        if(flag==1){
            profit = max(-arr[idx]+solve(idx+1,0,k,n,K,arr,dp), solve(idx+1,1,k,n,K,arr,dp));
        }
        else{
            profit = max(arr[idx]+solve(idx+1,1,k+1,n,K,arr,dp), solve(idx+1,0,k,n,K,arr,dp));
        }
        return dp[idx][k][flag] = profit;
    }
    int maxProfit(int K, int N, int A[]) {
        // code here
         vector< vector< vector<int>>>dp(N+1, vector< vector<int>>(K+1, vector<int>(2,-1)));
         return solve(0,1,1,N,K,A,dp);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> K;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++) cin >> A[i];

        Solution ob;
        cout << ob.maxProfit(K, N, A) << endl;
    }
    return 0;
}
// } Driver Code Ends