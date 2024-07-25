//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    bool solve(vector<vector<int>> &dp, int i, int j, vector<int> &arr){
        if(j==0) return true;
        if(i==0) return arr[0]==j;
        if(dp[i][j]!=-1) return dp[i][j];
        bool nottake = solve(dp,i-1,j,arr);
        // take condition
        bool take = false;
        if(arr[i]<=j){
            take = solve(dp,i-1,j-arr[i],arr);
        }
        return dp[i][j]=take||nottake;
        
    }
    bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        int n = arr.size();
        vector<vector<int>> dp(n, vector<int>(sum+1, -1));
        return solve(dp,n-1,sum,arr);
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends