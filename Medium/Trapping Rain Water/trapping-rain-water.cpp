//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        long long maxl =0, maxr=0;
        long long l=0, r = n-1;
        long long ans=0;
        while(l<=r){
            if(arr[l]<=arr[r]){
                if(maxl<=arr[l]) maxl = arr[l];
                else ans += maxl-arr[l];
                l++;
            }
            else{
                if(maxr<=arr[r]) maxr = arr[r];
                else ans += maxr-arr[r];
                r--;
            }
        }
        return ans;
    }
    
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends