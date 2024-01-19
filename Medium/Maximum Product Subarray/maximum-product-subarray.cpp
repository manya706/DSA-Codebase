//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    // code here
	   // Sliding window approach
	   long long maxval=arr[0];
	   long long minval=arr[0];
	   long long maxP=arr[0];
	   for(int i=1;i<n;i++){
	       if(arr[i]<0) swap(maxval,minval);
	       maxval = max((long long)arr[i],maxval*arr[i]);
	       minval = min((long long)arr[i],minval*arr[i]);
	       maxP = max(maxP,maxval);
	   }
	   return maxP;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends