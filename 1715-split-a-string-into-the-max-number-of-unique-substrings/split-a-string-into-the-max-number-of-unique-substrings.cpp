class Solution {
public:
    int helper(string &s, int start, unordered_set<string> &st, int n){
        if(start==n) return 0;
        int maxSplit = 0;
        for(int i=start+1;i<=n;i++){
            string substr = s.substr(start, i-start);
            if(st.find(substr)==st.end()){
                st.insert(substr);
                maxSplit = max(maxSplit, 1+helper(s,i,st,n));
                st.erase(substr);
            }
        }
        return maxSplit;
    }
    int maxUniqueSplit(string s) {
        // backtracking and set
        int n = s.length();
        unordered_set<string> st;
        return helper(s,0,st,n);
    }
};
static const auto ms = []() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
}();