//{ Driver Code Starts
//Initial template for C++ 
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

//User function template for C++

class Solution{
  public:		
	int lps(string s) {
	    // Your code goes here
	    vector<int> l(s.length());
	    l[0] = 0;
	    int m=0;
	    for(int i=1;i<s.length();i++){
	        int x = l[i-1];
	        while(s[i]!=s[x]){
	            if(x==0){
	                x-=1;
	                break;
	            }
	            x = l[x-1];
	        }
	        l[i] = x+1;
	        if(l[i]>m) m = l[i];
	    }
	    return l[s.length()-1];
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
   	while(t--)
   	{
   		string str;
   		cin >> str;

   		Solution ob;

   		cout << ob.lps(str) << "\n";
   	}

    return 0;
}

// } Driver Code Ends