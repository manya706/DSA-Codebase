//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    {
        // code here
        int s=0, e=n-1;
        vector<int> ans = {-1, -1};
        bool f1=false, f2=false;
        while(s<=e){
            if(arr[s]==x && !f1){
                ans[0] = s;
                f1 = true;
            }
            if(arr[e]==x && !f2){
                ans[1] = e;
                f2 = true;
            }
            if(f1 && f2) break;
            else {
                if(!f1) s++;
                if(!f2) e--;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends