class Solution {
public:
    bool ispal(const string& s, int l, int r){
            while(l<r){
                if(s[l++]!=s[r--]) return false;
            }
            return true;
        }
void backtrack(const string& s, int start, vector<string>&cur,vector<vector<string>>& ans){
        if(start == s.length()){
            ans.push_back(cur);
            return ;
        }
        for(int e=start+1;e <=s.length();++e){
            if(ispal(s,start,e-1)){
                cur.push_back(s.substr(start,e-start));
                backtrack(s,e,cur,ans);
                cur.pop_back();
            }
        }
    }
    
    vector<vector<string>> partition(string s) {
        // dp or backtracking
        vector<vector<string>> ans;
        vector<string> cur;
        int len = s.length();
        backtrack(s,0,cur,ans);
        return ans;
    }
    
};