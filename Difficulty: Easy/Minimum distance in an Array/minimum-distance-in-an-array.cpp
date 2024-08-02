//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
        // code here
        int mindiff = INT_MAX;
        int last_pos_x = -1;
        int last_pos_y = -1;
    
        for (int i = 0; i < n; i++) {
            if (a[i] == x) {
                last_pos_x = i;
                // If y has been seen before, update min_diff
                if (last_pos_y != -1) {
                    mindiff = std::min(mindiff, std::abs(last_pos_x - last_pos_y));
                }
            } else if (a[i] == y) {
                last_pos_y = i;
                // If x has been seen before, update min_diff
                if (last_pos_x != -1) {
                    mindiff = std::min(mindiff, std::abs(last_pos_y - last_pos_x));
                }
            }
        }
        if(mindiff==INT_MAX) return -1;
        return mindiff;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int x, y;
        cin >> x >> y;
        Solution obj;
        cout << obj.minDist(a, n, x, y) << endl;
    }
    return 0;
}

// } Driver Code Ends