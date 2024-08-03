//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        // Your code here
        int n1 = str1.length(), n2 = str2.length();
        if(n1!=n2) return false;
        if(n1==1 && n2==1) return (str1==str2);
        int n = str1.length();
        string clockwiseRot = str1.substr(n - 2, 2) + str1.substr(0, n - 2);
    
        // Anti-clockwise rotation by 2 places
        string anticlockwiseRot = str1.substr(2) + str1.substr(0, 2);
        
        // Check if str2 is either of the rotated strings
        return (str2 == clockwiseRot || str2 == anticlockwiseRot);
    }

};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends