class Solution {
public:
    void helper(vector<int> &nums, int i, int &c, int maxOR, int currOR){
        if(currOR == maxOR) c++;
        for(int j = i; j < nums.size() ; j++){
            helper(nums, j+1, c, maxOR, currOR|nums[j]);
        }
    }
    int countMaxOrSubsets(vector<int>& nums) {
        // max OR of an array is the OR of complete array
        int maxOR = 0;
        for(int num:nums){
            maxOR |= num;
        }
        int c=0;
        helper(nums, 0, c, maxOR, 0);
        return c;
    }
};