//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int merge(long long arr[], long long low, long long mid, long long high){
        vector<long long> temp;
        long long int count = 0;
        long long int left = low, right = mid+1;
        while(left<=mid and right<=high){
            if(arr[left]<=arr[right]){
                temp.push_back(arr[left]);
                left++;
            }
            else {
                count += mid-left+1;
                temp.push_back(arr[right]);
                right++;
            }
        }
        
        while(left<=mid){
            temp.push_back(arr[left]);
            left++;
        }
        while(right<=high){
            temp.push_back(arr[right]);
            right++;
        }
        for(long long int i=low; i<=high;i++){
            arr[i] = temp[i-low];
        }
        return count;
        
    }
    long long int mergeSort(long long arr[], long long low, long long high){
        long long cnt =0;
        if(low>=high) return cnt;
        long long mid = low + (high-low)/2;
        cnt += mergeSort(arr,low,mid);
        cnt += mergeSort(arr, mid+1,high);
        cnt += merge(arr, low, mid, high);
        return cnt;
    }
    long long int inversionCount(long long arr[], int n) {
        // Your Code Here
        return mergeSort(arr,0,n-1);
    }
};

//{ Driver Code Starts.

int main() {

    long long T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        long long A[N];
        for (long long i = 0; i < N; i++) {
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A, N) << endl;
    }

    return 0;
}

// } Driver Code Ends