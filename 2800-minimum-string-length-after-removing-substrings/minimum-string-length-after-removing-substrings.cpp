class Solution {
public:
    int minLength(string s) {
        // easy stack solution
        stack<char> st;
        for(int i=0;i<s.length();i++){
            if(!st.empty() && ((s[i]=='B' && st.top()=='A') || (s[i]=='D' && st.top()=='C'))){
                st.pop();
            }
            else st.push(s[i]);
        }
        return st.size();
    }
};
static const auto ms = []() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
}();