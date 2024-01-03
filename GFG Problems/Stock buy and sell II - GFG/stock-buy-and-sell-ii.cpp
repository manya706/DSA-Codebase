//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
  
    int solve(vector<vector<int>> &dp, int i, vector<int> &price, int buy,int n){
        if(i==n) return 0;
        if(dp[i][buy] != -1) return dp[i][buy];
        int op1=0,op2=0;
        if(buy==0){
            // buy the stock
             op1 = -price[i] + solve(dp,i+1,price,1,n);
             op2 = 0 + solve(dp,i+1,price,0,n);
        }
        if(buy==1){
            // sell the stock
             op1 = price[i] + solve(dp,i+1,price,0,n);
             op2 = 0 + solve(dp,i+1,price,1,n);
        }
        return dp[i][buy] = max(op1,op2);
    }
    int stockBuyAndSell(int n, vector<int> &prices) {
        // code here
        vector<vector<int>> dp(n, vector<int>(2,-1));
        return solve(dp,0,prices,0,n);
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n;
        scanf("%d",&n);
        
        
        vector<int> prices(n);
        Array::input(prices,n);
        
        Solution obj;
        int res = obj.stockBuyAndSell(n, prices);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends