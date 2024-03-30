#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void constructPermutation(vector<int>& a) {
    int n = a.size();
    vector<int> p(n);

    // Construct prefix and suffix arrays
    vector<int> prefix(n), suffix(n);
    for (int i = 0; i < n; ++i) {
        prefix[i] = i;
        suffix[i] = i;
    }

    for (int i = 1; i < n; ++i) {
        prefix[i] = min(prefix[i], prefix[i - 1]);
    }
    for (int i = n - 2; i >= 0; --i) {
        suffix[i] = min(suffix[i], suffix[i + 1]);
    }

    // Construct permutation array
    for (int i = 0; i < n; ++i) {
        int mex = prefix[i] + a[i];
        if (mex >= 0 && mex < n) {
            p[mex] = i;
        } else {
            mex = suffix[i] - a[i];
            p[mex] = i;
        }
    }

    // Output the permutation p
    for (int i = 0; i < n; ++i) {
        cout << p[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        constructPermutation(a);
    }

    return 0;
}
