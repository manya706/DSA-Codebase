//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;
// int maxArea(int A[], int len);

// } Driver Code Ends
//User function template for C++

long long maxArea(long long A[], int len)
{
    // Your code goes here
    int maxArea = 0;
    int l = 0;
    int r = len-1;
    
    while(l<r){
        int height=min(A[l],A[r]);
        int width = r-l;
        int area = height*width;
        maxArea = max(area,maxArea);
        if(A[l]<A[r]){ 
            l++;
        }
        else r--;
    }
    return maxArea;
}

//{ Driver Code Starts.

// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout<<maxArea(arr,n)<<endl;
    }
return 0;
}

// } Driver Code Ends