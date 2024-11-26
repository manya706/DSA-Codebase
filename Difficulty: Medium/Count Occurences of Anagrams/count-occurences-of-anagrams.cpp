//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
#define MAX 256
class Solution{
public:
    bool compare(char a1[], char a2[]){
        for(int i=0;i<MAX;i++){
            if(a1[i]!=a2[i]) return false;
        }
        return true;
    }
	int search(string pat, string txt) {
	    // code here
	    int m = pat.size(), n = txt.size();
	    char countp[MAX] = {0}; 
	    char counttw[MAX] = {0}; 
	    
	    for(int i=0;i<m;i++){
	        countp[pat[i]]++;
	        counttw[txt[i]]++;
	    }
	    
	    int ans=0;
	    for(int i=m;i<n;i++){
	        if(compare(countp, counttw)) ans++;
	        counttw[txt[i]]++;
	        counttw[txt[i-m]]--;
	    }
	    
	    if(compare(countp,counttw)) ans++;
	    return ans;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends