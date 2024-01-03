//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int wood(int tree[], int mid, int n){
        int sum=0;
        for(int i = n - 1; i >= 0; i--){
            if (tree[i] - mid <= 0) break;
            sum+= (tree[i]-mid);
        }
        return sum;
    }
    int find_height(int tree[], int n, int k)
    {
        // code here
        sort(tree,tree+n);
        int low=0, high = tree[n-1];
        while(low<=high){
            int mid = low+((high-low)/2);
            int collected = wood(tree, mid,n);
            if(collected==k) return mid;
            else if(collected>k) low = mid+1;
            else high=mid-1;
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n;

        int tree[n];
        for(int i=0; i<n; i++)
            cin>>tree[i];
        cin>>k;
        Solution ob;
        cout<< ob.find_height(tree,n,k) << endl;
    }
    return 1;
}
// } Driver Code Ends