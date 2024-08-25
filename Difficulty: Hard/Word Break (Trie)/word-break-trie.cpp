//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
    public:
    // A : given string to search
    // B : vector of available strings
    struct Trie {
        Trie* children[26];
        bool isEnd = false;
        Trie (){
            for(int i=0;i<26;i++){
                children[i] = NULL;
            }
        }
        bool doesContain(char c){
            return children[c-'a']!=NULL;
        }
    };
    
    void insert(string s, Trie* root){
        Trie* node= root;
        for(const char c:s){
            if(!node->doesContain(c)){
                node->children[c-'a'] = new Trie();
            }
            node = node->children[c-'a'];
        }
        node->isEnd = true;
    }
    
    bool dfs(string s, int idx, Trie* root, vector<int>&dp){
        if(idx==s.size()) return 1;
        if(dp[idx]!= -1) return dp[idx];
        Trie* curr = root;
        for(int i=idx;i<s.length();i++){
            if(curr->children[s[i]-'a']==NULL){
                return dp[idx] = 0;
            }
            curr = curr->children[s[i] - 'a'];
            if (curr->isEnd){
                if (dfs(s,i+1,root,dp)==true){
                    return dp[idx] = true;
                }
            }
        }
        return dp[idx] = false;
    }
    int wordBreak(string s, vector<string> &B) {
        //code here
        Trie* root = new Trie();
        for (auto& word : B) {
            insert(word, root);
        }
        
        vector<int> dp(s.size(), -1);
        return dfs(s, 0, root, dp);
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dict;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dict.push_back(S);
        }
        string line;
        cin>>line;
        Solution ob;
        cout<<ob.wordBreak(line, dict)<<"\n";
    }
}

// } Driver Code Ends