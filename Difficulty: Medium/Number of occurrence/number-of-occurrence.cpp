//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    // code here
	    int s=0, e=n-1;
	    bool flag1 = false, flag2=false;
	    while(s<=e){
	        if(arr[s]==x){
	            flag1= true;
	            if(flag1&&flag2){
	                return e-s+1;
	            }
	        }
	        if(arr[e]==x){
	            flag2 = true;
	            if(flag1&&flag2) return e-s+1;
	        }
	        if(flag1) e--;
	        if(flag2) s++;
	        else if(!flag1 && !flag2) {
	            e--;
	            s++;
	        }
	    }
	    return 0;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends