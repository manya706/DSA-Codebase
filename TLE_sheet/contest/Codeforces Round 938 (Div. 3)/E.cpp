#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int test_cases;
    cin >> test_cases;

    while (test_cases--) {
        int length;
        cin >> length;
        string binary_string;
        cin >> binary_string;

        for (int k = length; k >= 1; k--) {
            set<int> ones_indices;
            bool valid = true;

            for (int i = 0; i < length; i++) {
                int num_ones_indices = ones_indices.size();
                if (num_ones_indices % 2 == 0) {
                    if (binary_string[i] == '0') {
                        if (i + k - 1 <= length - 1) {
                            ones_indices.insert(i + k - 1);
                        } else {
                            valid = false;
                        }
                    }
                } else {
                    if (binary_string[i] == '1') {
                        if (i + k - 1 <= length - 1) {
                            ones_indices.insert(i + k - 1);
                        } else {
                            valid = false;
                        }
                    }
                }
                auto it = ones_indices.find(i);
                if (it != ones_indices.end()) {
                    ones_indices.erase(it);
                }
            }
            if (valid) {
                cout << k << endl;
                break;
            }
        }
    }
    return 0;
}
