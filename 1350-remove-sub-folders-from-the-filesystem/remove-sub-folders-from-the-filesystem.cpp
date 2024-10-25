class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        int n = folder.size();
        sort(folder.begin(), folder.end());
        vector<string> ans = {folder[0]};
        string f = folder[0];
        for(int i=1;i<n;i++){
            string s = folder[i];
            if(s.find(f+'/')!=0){
                ans.push_back(s);
                f = s;
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