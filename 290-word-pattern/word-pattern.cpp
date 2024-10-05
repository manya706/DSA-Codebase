class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> st;
        string curr = "";
        for(auto it:s){
            if(it==' '){
                st.push_back(curr);
                curr="";
                continue;
            }
            curr+=it;
        }

        st.push_back(curr);
        if(st.size()!=pattern.size()) return false;
        map<char, string>mp;
        map<string, char> check;
        for(int i=0;i<pattern.size();i++){
            if(!mp.count(pattern[i])){
                mp[pattern[i]] = st[i];
                if(check.count(st[i])) return false;
                check[st[i]] = pattern[i];
            }
            else{
                if(mp[pattern[i]]!=st[i]) return false;
            }
        }
        return true;
    }
};