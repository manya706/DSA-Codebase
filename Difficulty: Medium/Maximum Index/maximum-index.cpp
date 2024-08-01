//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // arr[]: input array
    // Function to find the maximum index difference.
    int maxIndexDiff(vector<int>& arr) {
        // Your code here
        int n = arr.size();
        if (n == 0) return -1;
    
        // Create LMin[] and RMax[] arrays
        vector<int> LMin(n);
        vector<int> RMax(n);
    
        // Initialize LMin[] array
        LMin[0] = arr[0];
        for (int i = 1; i < n; i++) {
            LMin[i] = min(arr[i], LMin[i - 1]);
        }
    
        // Initialize RMax[] array
        RMax[n - 1] = arr[n - 1];
        for (int j = n - 2; j >= 0; j--) {
            RMax[j] = max(arr[j], RMax[j + 1]);
        }
    
        // Traverse LMin[] and RMax[] to find the maximum j - i
        int i = 0, j = 0, maxDiff = -1;
        while (j < n && i < n) {
            if (LMin[i] <= RMax[j]) {
                maxDiff = max(maxDiff, j - i);
                j++;
            } else {
                i++;
            }
        }
    
        return maxDiff;
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;

        // calling maxIndexDiff() function
        cout << ob.maxIndexDiff(nums) << endl;
    }

    return 0;
}
// } Driver Code Ends