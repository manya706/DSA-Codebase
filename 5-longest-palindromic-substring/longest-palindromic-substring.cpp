class Solution {
public:
    string longestPalindrome(string s) {
        // using dp or two pointers
        if(s.length() <= 1) return s;
        vector<vector<bool>> dp(s.length(),vector<bool>(s.length(),false));
        int max_length = 1;
        int start=0;
        int e=0;
        for(int i=0;i<s.length();++i){
            dp[i][i] = true;
            for(int j=0;j<i;++j){
                if(s[j]==s[i] && (i-j <= 2 || dp[j+1][i-1])){
                    dp[j][i] = true;
                    if(i-j+1 > max_length){
                        max_length = i-j+1;
                        start = j;
                        e=i; 
                    }
                }
            }
        }
        return s.substr(start,e-start+1);
    }
};