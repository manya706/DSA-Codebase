//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to return max value that can be put in knapsack of capacity W.
    int helper(int W, vector<int>& wt, vector<int>& val, vector<vector<int>> &dp, int i){
        if(i<0 || W==0) return 0;
        if(dp[i][W]!=-1) return dp[i][W];
        int nottake = helper(W,wt,val,dp,i-1);
        int take = 0;
        if(W-wt[i]>=0){
            take = val[i]+helper(W-wt[i],wt,val,dp,i-1);
        }
        return dp[i][W] = max(take,nottake);
    }
    int knapSack(int W, vector<int>& wt, vector<int>& val) {
        // Your code here
        int n = val.size();
        vector<vector<int>> dp(n, vector<int> (W+1,-1));
        return helper(W,wt,val,dp,n-1);
    }
};

//{ Driver Code Starts.

int main() {
    // taking total testcases
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        // reading number of elements and weight
        int n, w;
        vector<int> arr, val, wt, drr;
        string ip;
        int number;
        getline(cin, ip);
        stringstream ss(ip);

        while (ss >> number) {
            arr.push_back(number);
        }

        getline(cin, ip);
        ss.clear();
        ss.str(ip);

        while (ss >> number) {
            val.push_back(number);
        }

        w = arr[0];
        n = val.size();
        getline(cin, ip);
        ss.clear();
        ss.str(ip);

        while (ss >> number) {
            wt.push_back(number);
        }
        Solution ob;
        cout << ob.knapSack(w, wt, val) << endl;
    }
    return 0;
}
// } Driver Code Ends