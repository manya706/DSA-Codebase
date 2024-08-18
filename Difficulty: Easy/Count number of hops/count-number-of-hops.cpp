//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
    long long countWays(int n)
    {
        
        // your code here
        long long count[n+1];
        count[0] = 1;
        if(n>=1) count[1] = 1;
        if(n>=2) count[2] = 2;
        for(int i=3;i<=n;i++){
            count[i] = (count[i-1]+count[i-2]+count[i-3])% 1000000007;;
        }
        return count[n];
    }
};


//{ Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}

// } Driver Code Ends