//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// #define ll long long
class Solution{
public:
   
    vector<long long> nthRowOfPascalTriangle(int n) {
        vector<long long> prevRow, currRow;
    
    prevRow.push_back(1);  // The first row is always [1]
    
    for (int line = 1; line < n; ++line) {
        currRow.clear();
        currRow.push_back(1);  // First element of every row is 1
        
        for (int i = 1; i < line; ++i) {
            currRow.push_back((prevRow[i - 1] + prevRow[i])%1000000007);
        }
        
        currRow.push_back(1);  // Last element of every row is 1
        prevRow = currRow;  // Update previous row
    }
    
    return prevRow;
    }
};


//{ Driver Code Starts.


void printAns(vector<long long> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.nthRowOfPascalTriangle(n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends