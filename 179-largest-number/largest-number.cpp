class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> ans;
        for(int num:nums){
            ans.push_back(to_string(num));
        }
        sort(ans.begin(), ans.end(), [](const string &a, const string &b) {
            return (b + a) < (a + b);
        });
        if(ans[0]=="0") return "0";
        string res;
        for(string &num:ans){
            res+=num;
        }
        return res;
    }
};