//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
    int klarge(int arr[],int n ,int k){
        int l =INT_MAX, h = INT_MIN;
        for (int i = 0; i < n; i++) {
            l = min(l, arr[i]);
            h = max(h, arr[i]);
        }
        while(l<=h){
            int mid = l+(h-l)/2;
            int count=0;
            for(int i=0;i<n;i++){
                if(mid<arr[i]) count=count+1;
            }
            if(count>=k){
                l = mid+1;
            }
            else{
                h = mid-1;
            }
        }
        return h;
    }
	vector<int> kLargest(int arr[], int n, int k) {
	    // code here
	    vector<int> v;
	     sort(arr, arr + n, greater<int>());
 
        // Print the first kth largest elements
        for (int i = 0; i < k; i++)
            v.push_back(arr[i]);
	   // vector<int> v(uniqueValues.begin(), uniqueValues.end());
	    sort(v.rbegin(), v.rend());
	   // sort(v.begin(),v.end());
	    return v;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.kLargest(arr, n, k);
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends