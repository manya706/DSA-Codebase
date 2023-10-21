//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int solve(int target){
        target== abs(target);
        int sum=0, steps=0;
        while(sum<target || (sum-target)%2 != 0)
        {
            steps++;
            sum += steps;
        }
        return steps;
    }
    int minSteps(int D){
        // code here
        return solve(D);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int D;
        cin>>D;
        
        Solution ob;
        cout<<ob.minSteps(D)<<"\n";
    }
    return 0;
}
// } Driver Code Ends