//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template in C++

class Solution {
  public:
   long long func(vector<int> &arr, long long pages, int n) {
    long long students = 1;
    long long pagestudent = 0;
    
    for(int i = 0; i < n; i++) {
        if(pagestudent + arr[i] <= pages) {
            pagestudent += arr[i];
        } else {
            students += 1;
            pagestudent = arr[i];
        }
    }
    
    return students;
}

// Function to find the minimum number of pages.
long long findPages(int n, int arr[], int m) {
    if (m > n) return -1; // Not enough books for each student

    vector<int> vec(arr, arr + n);
    long long low = *max_element(vec.begin(), vec.end());
    long long high = accumulate(vec.begin(), vec.end(), 0LL);
    
    while (low <= high) {
        long long mid = (low + high) / 2;
        long long k = func(vec, mid, n);
        
        if (k > m) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    return low;
}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        int m;
        cin >> m;
        Solution ob;
        cout << ob.findPages(n, A, m) << endl;
    }
    return 0;
}

// } Driver Code Ends