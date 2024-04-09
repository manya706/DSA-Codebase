#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int maxGCDPath(vector<vector<int>>& grid) {
    int n = grid.size();
    int m = grid[0].size();
    
    // Initialize the dp array with zeros
    vector<vector<int>> dp(n, vector<int>(m, 0));
    
    // Initialize the first cell with its own value
    dp[0][0] = grid[0][0];
    
    // Fill the first row
    for (int j = 1; j < m; ++j) {
        dp[0][j] = gcd(dp[0][j - 1], grid[0][j]);
    }
    
    // Fill the first column
    for (int i = 1; i < n; ++i) {
        dp[i][0] = gcd(dp[i - 1][0], grid[i][0]);
    }
    
    // Fill the rest of the dp array
    for (int i = 1; i < n; ++i) {
        for (int j = 1; j < m; ++j) {
            dp[i][j] = gcd(max(dp[i - 1][j], dp[i][j - 1]), grid[i][j]);
        }
    }
    
    // Return the GCD at the bottom-right corner
    return dp[n - 1][m - 1];
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> grid[i][j];
            }
        }
        
        int maxGCD = maxGCDPath(grid);
        cout << maxGCD << endl;
    }
    
    return 0;
}
