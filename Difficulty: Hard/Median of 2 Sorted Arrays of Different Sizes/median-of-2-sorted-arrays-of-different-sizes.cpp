//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
double MedianOfArrays(vector<int>& array1, vector<int>& array2);


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
        // Your code goes here
        int n = array1.size();
        int m = array2.size();
        if(n>m) return MedianOfArrays(array2, array1);
        int sum = (n+m+1)/2;
        int s=0, e = n;
        while(s<=e){
            int mid = (s+e)/2;
            int leftAsize = mid;
            int leftBsize = sum - mid;
            int leftA = (leftAsize>0) ? array1[leftAsize-1] : INT_MIN;
            int leftB = (leftBsize>0) ? array2[leftBsize-1] : INT_MIN;
            int rightA = (leftAsize<n) ? array1[leftAsize] : INT_MAX;
            int rightB = (leftBsize<m) ? array2[leftBsize] : INT_MAX;
            if(leftA <= rightB && leftB<=rightA){
                if((m+n)%2==0){
                    return (max(leftA, leftB)+min(rightA, rightB))/2.0;
                }
                return max(leftA,leftB);
            }
            else if (leftA>rightB){
                e = mid-1;
            } else {
                s = mid+1;
            }
        }
        return 0.0;
        
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        cin>>n;
        vector<int> array2(n);
        for (int i = 0; i < n; ++i){
            cin>>array2[i];
        }
        Solution ob;
        cout<<ob.MedianOfArrays(array1, array2)<<endl;
    }
    return 0; 
}



// } Driver Code Ends