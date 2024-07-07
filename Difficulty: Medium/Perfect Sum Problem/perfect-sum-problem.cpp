//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int mod = (int)(1e9 + 7);
	int fun(int pos, int sum, vector<vector<int>> &dp, int arr[], int n){
	    if(pos>=n) return sum==0;
	    int &ans = dp[pos][sum];
	    if(ans!=-1) return ans;
	    ans =0;
	    ans+=fun(pos+1,sum,dp,arr,n);
	    ans%=mod;
	    if(arr[pos]<=sum){
	        ans+=fun(pos+1,sum-arr[pos],dp,arr,n), ans%=mod;
	    }
	    return ans;
	}
	int perfectSum(int arr[], int n, int sum)
	{
        // Your code goes here
        vector<vector<int>> dp(n+1, vector<int>(sum+2,-1));
        
        return fun(0,sum,dp,arr,n);
	}
	  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends