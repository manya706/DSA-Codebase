//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        if (n == 1) return 0;
    
    // If the first element is 0, it's impossible to move anywhere
    if (arr[0] == 0) return -1;
    
    int jump = 1; // Start with one jump (as the first step is a jump)
    int max_furthest = arr[0]; // Max we can reach initially
    int steps = arr[0]; // Steps we can still take in the current range
    
    for (int i = 1; i < n; i++) {
        // If we've reached the last index
        if (i == n - 1) return jump;
        
        // Update the farthest we can reach from here
        max_furthest = max(max_furthest, i + arr[i]);
        
        // Decrement the steps we can still take
        steps--;
        
        // If we have no steps left
        if (steps == 0) {
            jump++; // We need another jump
            if (i >= max_furthest) return -1; // If we're stuck
            steps = max_furthest - i; // Reset steps for the next range
        }
    }
    
    return -1; // If we never reach the last index
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends