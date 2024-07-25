//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item {
    int value;
    int weight;
};


// } Driver Code Ends
// class implemented
/*
struct Item{
    int value;
    int weight;
};
*/

class Solution {
  public:
    // Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int w, Item arr[], int n) {
        // Your code here
        priority_queue<pair<double,int>> pq;
        for(int i=0;i<n;i++){
            pq.push({arr[i].value * 1.0/ arr[i].weight, i});
        }
        double total = 0.0;
        while(!pq.empty() && w>0){
            int ind = pq.top().second;
            pq.pop();
            double fr = min(1.0, w*1.0/arr[ind].weight);
            total += fr*arr[ind].value;
            w-=fr*arr[ind].weight;
        }
        return total;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    // taking testcases
    cin >> t;
    cout << setprecision(6) << fixed;
    while (t--) {
        // size of array and weight
        int n, W;
        cin >> n >> W;

        Item arr[n];
        // value and weight of each item
        for (int i = 0; i < n; i++) {
            cin >> arr[i].value >> arr[i].weight;
        }

        // function call
        Solution ob;
        cout << ob.fractionalKnapsack(W, arr, n) << endl;
    }
    return 0;
}
// } Driver Code Ends