//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int maxStairHeight(int N) {
        // Code here
        int x = sqrt(2*N);
        if (((x) * (x+1)) <= 2*N)
            return x;
        return (x-1);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.maxStairHeight(N) << endl;
    }
    return 0;
}
// } Driver Code Ends