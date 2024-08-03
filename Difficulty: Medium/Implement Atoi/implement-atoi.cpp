//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        //Your code here
        int n = s.length();
        int ans=0;
        int i=0;
        bool flag = false;
        if(s[0]=='-') flag = true,i++;
        for(i;i<n;i++){
            if(!flag && s[i]>='0' && s[i]<='9'){
                int x = (s[i]-'0');
                ans = ans*10+x;
            }
            else if(flag && s[i]>='0' && s[i]<='9'){
                int x = ('0'-s[i]);
                ans = ans*10+x;
            }
            else{
                return -1;
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
		string s;
		cin>>s;
		Solution ob;
		int ans=ob.atoi(s);
		cout<<ans<<endl;
	}
}
// } Driver Code Ends