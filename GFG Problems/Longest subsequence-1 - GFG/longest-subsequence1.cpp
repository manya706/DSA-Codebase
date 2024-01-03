//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int longestSubsequence(int n, int arr[])
    {
        // code here
        int res =0;
        if(n==1) return 1;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            if(mp.count(arr[i]+1)>0 || mp.count(arr[i]-1)>0){
                mp[arr[i]] = 1+max(mp[arr[i]+1], mp[arr[i]-1]);
            }
            else{
                mp[arr[i]] = 1;
            }
            res = max(res,mp[arr[i]]);
        }
        return res;
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int A[N];
        for(int i = 0;i < N;i++)
            cin>>A[i];
        
        Solution ob;
        cout<<ob.longestSubsequence(N, A)<<endl;
    }
    return 0;
}
// } Driver Code Ends