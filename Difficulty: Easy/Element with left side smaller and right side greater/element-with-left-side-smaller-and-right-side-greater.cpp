//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int findElement(vector<int> &arr) {
        // Code here
        int n = arr.size();
        if(n<3) return -1;
        vector<int> leftMax(n);
        leftMax[0] = arr[0];
        
        for(int i=1;i<n;i++){
            leftMax[i] = max(leftMax[i-1], arr[i-1]);
        }
        int rightMin = arr[n-1];
        
        for(int i=n-2;i>=0;i--){
            if(arr[i] > leftMax[i] && arr[i] < rightMin)  return arr[i];
            
            rightMin = min(rightMin, arr[i]);
        }
        
        return -1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.findElement(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends