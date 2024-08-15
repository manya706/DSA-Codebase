//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int func(vector<int>&arr, int p){
        int s = 1;
        int ps = 0;
        for(int i=0;i<arr.size();i++){
            if(ps+arr[i]<=p){
                ps += arr[i];
            } else {
                s++;
                ps = arr[i];
            }
        }
        return s;
    }
    int basefunc(vector<int> &arr, int n){
        int low = *max_element(arr.begin(), arr.end());
        int high = accumulate(arr.begin(), arr.end(), 0);
        while(low<=high){
            int mid = (low+high)/2;
            int k = func(arr, mid);
            if(k>n) low = mid+1;
            else high = mid-1;
        }
        return low;
    }
    int splitArray(int arr[] ,int N, int K) {
        // code here
        vector<int> vec(arr, arr+N);
        return basefunc(vec, K);
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        
        cin>>N>>K;
        int arr[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        cout<<ob.splitArray(arr,N,K);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends