#include <iostream>
#include <vector>

using namespace std;

const int MOD = 998244353;

int solve(int l, int n) {
    vector<vector<vector<int>>> dp(l + 1, vector<vector<int>>(n + 1, vector<int>(n + 1, 0)));
    dp[0][0][0] = 1;

    for (int i = 0; i < l; ++i) {
        for (int j = 0; j <= n; ++j) {
            for (int k = 0; k <= n; ++k) {
                if (dp[i][j][k] == 0) continue;
                // Move cows from left
                for (int m = 1; m <= min(j, n - k); ++m) {
                    dp[i + 1][j - m][k + m] = (dp[i + 1][j - m][k + m] + dp[i][j][k]) % MOD;
                }
                // Move cows from right
                for (int m = 1; m <= min(n - j, k); ++m) {
                    dp[i + 1][j + m][k - m] = (dp[i + 1][j + m][k - m] + dp[i][j][k]) % MOD;
                }
            }
        }
    }

    int ans = 0;
    for (int j = 0; j <= n; ++j) {
        for (int k = 0; k <= n; ++k) {
            ans = (ans + dp[l][j][k]) % MOD;
        }
    }
    return ans;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int l, n;
        cin >> l >> n;
        cout << solve(l, n) << endl;
    }
    return 0;
}
