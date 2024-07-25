//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    bool solve(vector<vector<int>> &dp, int i, int arr[], int k){
        if(k==0) return 1;
        if(i==0) return arr[0]==k;
        if(dp[i][k]!=-1) return dp[i][k];
        bool nottake = solve(dp,i-1,arr,k);
        bool take = false;
        if(arr[i]<=k){
            take = solve(dp,i-1,arr,k-arr[i]);
        }
        return dp[i][k] = take||nottake;
    }
    int equalPartition(int N, int arr[])
    {
        // code here
        int sum=0;
        for(int i=0;i<N;i++){
            sum+=arr[i];
        }
        if(sum%2==0){
            int k = sum/2;
            vector<vector<int>> dp(N, vector<int>(k+1, -1));
            return solve(dp,N-1,arr,k);
        }
        else return 0;
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends