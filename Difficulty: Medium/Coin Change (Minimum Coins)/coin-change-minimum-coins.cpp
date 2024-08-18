//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {

  public:
    int minCoins(vector<int> &coins, int sum) {
        // Your code goes here
        int t[sum+1];
        t[0] = 0; // base case
        for(int i=1;i<=sum;i++){
            t[i] = INT_MAX;
        }
        for(int i=1;i<=sum;i++){
            for(int j=0;j<coins.size();j++){
                if(coins[j]<=i){
                    int sub = t[i-coins[j]];
                    if(sub!=INT_MAX && sub +1<t[i]){
                        t[i] = sub+1;
                    }
                }
            }
        }
        if(t[sum]==INT_MAX) return -1;
        return t[sum];
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        int v, m;
        cin >> v >> m;

        vector<int> coins(m);
        for (int i = 0; i < m; i++)
            cin >> coins[i];

        Solution ob;
        cout << ob.minCoins(coins, v) << "\n";
    }
    return 0;
}

// } Driver Code Ends