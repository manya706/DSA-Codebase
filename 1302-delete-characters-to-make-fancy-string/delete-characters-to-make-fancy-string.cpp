class Solution {
public:
    string makeFancyString(string s) {
        string ans = "";
        int n = s.length();
        ans.push_back(s[0]);
        int c=1;
        for(int i=1;i<n;i++){
            if(s[i]==ans.back()){
                c++;
                if(c<3) ans.push_back(s[i]);
            }
            else{
                c = 1;
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};
static const auto ms = []() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
}();
