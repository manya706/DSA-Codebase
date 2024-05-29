class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        ios_base :: sync_with_stdio(false), cin.tie(0), cout.tie(0);
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