class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i=0, j=0, ans=0;
        int cost =0, n=nums.size();
        while(j<n){
            if(nums[j++]==0) cost++;
            while(cost>k){
                if(nums[i++]==0) cost--;
            }
            ans = max(ans, j-i);
        }
        return ans;
    }
};