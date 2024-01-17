//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> nextPermutation(int n, vector<int> arr){
        // code here
        vector<int> ans = arr;
        int i,j;
        for(i=n-2;i>=0;i--){
            if(arr[i]<arr[i+1]){
                break;
            }
        }
        if(i<0){
            reverse(ans.begin(),ans.end());
        }
        else{
            for (j = n - 1; j > i; j--) {
            if (ans[j] > ans[i]) {
                break;
            }
        }
 
        // Swap the pivot and successor
        swap(ans[i], ans[j]);
 
        // Minimise the suffix part
        reverse(ans.begin() + i + 1, ans.end());
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        vector<int> ans = ob.nextPermutation(N, arr);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends