//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:    
    
    int transitionPoint(int arr[], int n) {
        // code here
        int s=0, e = n-1;
        int result=0;
        if(arr[e]==0) return -1;
        while(s<=e){
            int mid = s+(e-s)/2;
            if(arr[mid]==1){
                result = mid;
                e = mid-1;
            } else{
                s = mid+1;
            }
        }
        return result;
    }
};

//{ Driver Code Starts.
int transitionPoint(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.transitionPoint(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends