class Solution {
public:
    string getHint(string secret, string guess) {
        int bulls=0, cows=0;
        vector<int> s(10,0), g(10,0);
        for(int i=0;i<secret.size();i++){
            if(secret[i]==guess[i]) bulls++;
            else {
                s[secret[i]-'0']++;
                g[guess[i]-'0']++;
            }
        }
        for(int i=0;i<10;i++){
            cows+=min(s[i],g[i]);
        }
        string ans = to_string(bulls)+'A'+to_string(cows)+'B';
        return ans;
    }
};
static const auto ms = []() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
}();