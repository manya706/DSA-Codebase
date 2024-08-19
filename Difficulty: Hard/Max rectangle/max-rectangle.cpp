//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000


// } Driver Code Ends
/*You are required to complete this method*/

class Solution{
  public:
    int maxArea(int mat[MAX][MAX], int m, int n) {
        // Your code here
        // if(mat.empty() || mat[0].empty()) return 0;
        
        vector<int> left(n,0);
        vector<int> right(n,n);
        vector<int> height(n,0);
        int maxarea =0;
        for(int row=0;row<m;row++){
            int curLeft = 0, curRight = n;

        // Update height array
            for (int j = 0; j < n; j++) {
                if (mat[row][j] == 1) {
                    height[j]++;
                } else {
                    height[j] = 0;
                }
            }
    
            // Update left boundary array
            for (int j = 0; j < n; j++) {
                if (mat[row][j] == 1) {
                    left[j] = max(left[j], curLeft);
                } else {
                    left[j] = 0;
                    curLeft = j + 1;
                }
            }
    
            // Update right boundary array
            for (int j = n - 1; j >= 0; j--) {
                if (mat[row][j] == 1) {
                    right[j] = min(right[j], curRight);
                } else {
                    right[j] = n;
                    curRight = j;
                }
            }
    
            // Calculate maximum area for each cell
            for (int j = 0; j < n; j++) {
                maxarea = max(maxarea, (right[j] - left[j]) * height[j]);
            }
        }
        return maxarea;
    }
};


//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;

    int M[MAX][MAX];

    while (T--) {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> M[i][j];
            }
        }
        Solution obj;
        cout << obj.maxArea(M, n, m) << endl;
    }
}

// } Driver Code Ends