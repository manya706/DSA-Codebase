#include <bits/stdc++.h>
using namespace std;
#define ll long long

// Function to solve the problem using dynamic programming
ll solve(vector<vector<ll>> &dp, vector<vector<ll>> &vt, ll mask, ll idx, ll n) {
    if (mask == 0) return 0;
    if (idx != -1 && dp[idx][mask] != -1) return dp[idx][mask];

    ll a = -1, b = -1;
    if (idx != -1) {
        a = vt[idx][0];
        b = vt[idx][1];
    }

    ll ans = 0;
    for (ll i = 0; i < n; i++) {
        if (mask & (1 << i)) {
            if (idx == -1 || (vt[i][0] == a && vt[i][1] == b)) 
                ans = max(ans, 1 + solve(dp, vt, (mask ^ (1 << i)), i, n));
        }
    }

    if (idx == -1) return ans;
    return dp[idx][mask] = ans;
}

// Function to handle each test case
void ok() {
    ll n;
    cin >> n;
    map<string, ll> mp;
    vector<vector<string>> vt(n, vector<string>(2));
    for (ll i = 0; i < n; i++) {
        cin >> vt[i][0] >> vt[i][1];
        mp[vt[i][0]] += 1;
        mp[vt[i][1]] += 1;
    }

    ll num = 1;
    vector<vector<ll>> aux(n, vector<ll>(2));
    for (auto itr = mp.begin(); itr != mp.end(); itr++) 
        itr->second = num++;
    
    for (ll i = 0; i < n; i++) {
        aux[i][0] = mp[vt[i][0]];
        aux[i][1] = mp[vt[i][1]];
    }

    ll ans = 0;
    ll mask = (1 << n) - 1;
    vector<vector<ll>> dp(n + 1, vector<ll>(mask + 1, -1));
    cout << n - solve(dp, aux, mask, -1, n) << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll TC = 1;
    cin >> TC;
    while (TC--) {
        ok();
    }
    return 0;
}
