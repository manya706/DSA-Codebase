class Solution {
public:
    void func(vector<vector<int>> &ans, vector<int> &dp, vector<int> nums, int i){
        if(i==nums.size()){
            ans.push_back(dp);
            return;
        }
        dp.push_back(nums[i]);
        func(ans,dp,nums,i+1);
        dp.pop_back();
        func(ans,dp,nums,i+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        // using dp
        vector<int> dp;
        func(ans,dp,nums,0);
        return ans;
    }
};