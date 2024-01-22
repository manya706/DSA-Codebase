//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int longestSubstrDistinctChars (string S)
{
    // your code here
    int l=0,r=0;
    int maxLength = 0;
    bool visited[256] = { false };
    while(r<S.length()){
        if(visited[S[r]]==true){
            while(visited[S[r]]==true){
                visited[S[l]]=false;
                l++;
            }
        }
        visited[S[r]] = true;
        maxLength = max(maxLength, r-l+1);
        r++;
    }
    return maxLength;
}