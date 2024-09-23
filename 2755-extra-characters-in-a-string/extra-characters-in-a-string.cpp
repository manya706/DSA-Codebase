class Solution {
public:
    int minExtraChar(string s, vector<string>& dictionary) {
        unordered_set<string> dict(dictionary.begin(), dictionary.end());
        int n = s.length();
        vector<int> dp(n+1, 0);
        for(int i=n-1 ; i>=0 ; --i){
            dp[i] = dp[i+1]+1;
            for(int j = 1; j<=n-i ; ++j){
                string sub = s.substr(i,j);
                if(dict.find(sub)!=dict.end()){
                    dp[i] = min(dp[i], dp[i+j]);
                }
            }
        }
        return dp[0];

    }
};
static const auto ms = []() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
}();