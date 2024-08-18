//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int knapSack(int N, int W, int val[], int wt[])
    {
        // code here
        vector<int> cur(W+1, 0);
        for(int i=wt[0];i<=W;i++){
            cur[i] = (i/wt[0])*val[0]; 
        }
        for(int i=1;i<N;i++){
            for(int c=0;c<=W;c++){
                int nottake = cur[c];
                int taken = INT_MIN;
                if(wt[i]<=c){
                    taken = val[i]+cur[c-wt[i]];
                }
                cur[c] = max(taken,nottake);
            }
        }
        return cur[W];
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, W;
        cin>>N>>W;
        int val[N], wt[N];
        for(int i = 0;i < N;i++)
            cin>>val[i];
        for(int i = 0;i < N;i++)
            cin>>wt[i];
        
        Solution ob;
        cout<<ob.knapSack(N, W, val, wt)<<endl;
    }
    return 0;
}
// } Driver Code Ends