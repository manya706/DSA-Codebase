//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int countTriplet(int arr[], int n)
	{
	    // Your code goes here
	    int sum=0, c=0;
	    unordered_map<int,int> mp;
	    for(int i=0;i<n;i++){
	        mp[arr[i]]++;
	    }
	    for(int i=0;i<n;i++){
	        int sum=arr[i];
	        for(int j = i+1;j<n;j++){
	            sum+=arr[j];
	            if(mp.find(sum)!=mp.end()) c++;
	            sum-=arr[j];
	        }
	    }
	    return c;
	}
};

//{ Driver Code Starts.


int main() 
{
   	
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for(int i = 0; i < n; i++)
        	cin >> arr[i];

        Solution ob;
        cout << ob.countTriplet(arr, n) << "\n";

    }

    return 0;
}
// } Driver Code Ends