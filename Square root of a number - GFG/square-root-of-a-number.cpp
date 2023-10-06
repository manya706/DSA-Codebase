//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
    typedef long long ll;
    long long int floorSqrt(long long int x) 
    {
        // Your code goes here   
        ll s = 0;
        ll e = x;
        while(s<=e){
            ll mid = s+(e-s)/2;
            if(mid*mid == x) return mid;
            else if(mid*mid < x){
                s = mid+1;
            }
            else e = mid-1;
        }
        return s-1;
        
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}

// } Driver Code Ends