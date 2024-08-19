//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		int LongestRepeatingSubsequence(string str){
		    // Code here
		    int n = str.length();
		    int dp[n+1] = {0};
		    for(int i=1;i<=n;i++){
		        int new_a[n+1]={0};
		        for(int j=1;j<=n;j++){
		            if(str[i-1]==str[j-1] && i!=j){
		                new_a[j] = 1+dp[j-1];
		            }
		            else {
		                new_a[j] = max(dp[j], new_a[j-1]);
		            }
		        }
		        for(int j=0;j<=n;j++){
		            dp[j] = new_a[j];
		        }
		    }
		    return dp[n];
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.LongestRepeatingSubsequence(str);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends