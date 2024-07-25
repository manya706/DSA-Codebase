//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    long long MOD=1e9+7;
    int solve(int n, vector<int> &vec){
        if(n==1 || n==0) return 1;
        if(vec[n]!=-1) return vec[n];
        long long res=0;
        for(int i=1;i<=n;i++){
            res = (res + (solve(i-1,vec)%MOD*solve(n-i,vec)%MOD)%MOD)%MOD;
        }
        return vec[n]=res;
    }
    //Function to return the total number of possible unique BST. 
    int numTrees(int N) 
    {
        // Your code here
        vector<int> vec(N+1,-1);
        return solve(N,vec);
    }
};

//{ Driver Code Starts.
#define mod (int)(1e9+7)
int main(){
    
    //taking total testcases
    int t;
    cin>>t;
    while(t--){
        
        //taking total number of elements
        int n;
        cin>>n;
        Solution ob;
        //calling function numTrees()
        cout<<ob.numTrees(n)<<"\n";
    }
}	
// } Driver Code Ends