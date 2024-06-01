class Solution {
public:
    int scoreOfString(string s) {
        // very simple
        int ans=0;
        for(int i=1;i<s.length();i++){
            ans += abs(s[i]-s[i-1]);
        }
        return ans;
    }
};