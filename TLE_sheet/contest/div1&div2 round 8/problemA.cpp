#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    if (n == k) {
        for (int i = 0; i < n; ++i) {
            cout << 1 << " ";
        }
        cout << endl;
    } else {
        if (k == 1) {
            cout << 2 << " ";
            for (int i = 1; i < n; ++i) {
                cout << 1 << " ";
            }
            cout << endl;
        } else {
            cout << -1 << endl;
        }
    }
}

int main() {
    int t;
    cin >> t;

    for (int I = 0; I < t; ++I) {
        int n, k;
        cin >> n >> k;
        solve();
    }

    return 0;
}
