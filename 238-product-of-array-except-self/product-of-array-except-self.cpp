class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        ans[0] = 1;
        for(int i=1;i<n;i++){
            ans[i] = ans[i-1]*nums[i-1];
        }
        int right = 1;
        for(int i=n-1;i>=0;i--){
            ans[i] = ans[i]*right;
            right = nums[i]*right;
        }
        return ans;
    }
};