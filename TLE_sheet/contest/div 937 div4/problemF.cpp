#include <iostream>
#include <algorithm>
using namespace std;

// Function to find the minimum height of the rooted tree
int min_tree_height(int a, int b, int c) {
    // If there are no vertices with children, return -1
    if (a == 0 || b == 0) {
        if (c == 0) {
            return -1;
        }
    }
    
    // If there are no vertices with 2 children, return -1
    if (a == 0) {
        return max(1, c);
    }

    // If there are no vertices with 1 child, return -1
    if (b == 0) {
        return max(2, c);
    }

    // Otherwise, return the minimum height
    return max(2, c + 1);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        cout << min_tree_height(a, b, c) << endl;
    }

    return 0;
}
