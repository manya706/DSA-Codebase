//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        sort(arr.begin(),arr.end());
        vector<int> ans;
        int temp[n] = {};
        int missing=-1;
        int repeating=-1;
        for(int i=0;i<n;i++){
            temp[arr[i]-1]++;
            if(temp[arr[i]-1]>1) repeating = arr[i];
        }
        for(int i=0;i<n;i++){
            if(temp[i]==0) missing = i+1;
        }
        ans.push_back(repeating);
        ans.push_back(missing);
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends