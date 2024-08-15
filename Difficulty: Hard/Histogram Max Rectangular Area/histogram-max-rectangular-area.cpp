//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        // Your code here
        stack<int> s;
        s.push(-1);
        long long area = arr[0];
        int i = 0;
        
        vector<int> left_smaller(n, -1), right_smaller(n, n);
        while(i<n){
            while(!s.empty() && s.top() != -1
               && arr[s.top()] > arr[i]){
                   right_smaller[s.top()]=i;
                   s.pop();
               }
               if(i>0 && arr[i]==arr[i-1]){
                   left_smaller[i] = left_smaller[i-1];
               }
               else{
                   left_smaller[i] = s.top();
               }
               s.push(i);
               i++;
        }
        for(int i=0;i<n;i++){
            area = max(area , (right_smaller[i]-left_smaller[i]-1)*arr[i]);
        }
        return area;
    }
};


//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}

// } Driver Code Ends