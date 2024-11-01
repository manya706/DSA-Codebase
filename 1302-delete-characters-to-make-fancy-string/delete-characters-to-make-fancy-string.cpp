class Solution {
public:
    string makeFancyString(string s) {
        string ans = "";
        int n = s.length();
        int c =0;
        ans.push_back(s[0]);
        c++;
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
