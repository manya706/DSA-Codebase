class Solution {
public:
    string countAndSay(int n) {
        if(n==1) return "1";
        string s=countAndSay(n-1);
        string ans="";
        for(int i=0;i<s.length();i++){
            char c = s[i];
            int cnt=1;
            while(i<s.length()-1 && s[i]==s[i+1]){
                cnt++;
                i++;
            }
            ans+=to_string(cnt)+string(1,c); // to convert char to string[string(1,c)]
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