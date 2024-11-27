class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l =0;
        int maxl =0;
        unordered_set<char> charset;
        for(int i=0;i<s.length();i++){
            while(charset.find(s[i])!=charset.end()){
                charset.erase(s[l]);
                l++;
            }
            charset.insert(s[i]);
            maxl = max(maxl, i-l+1);
        }
        return maxl;
    }
};