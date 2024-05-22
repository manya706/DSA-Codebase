class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n = nums.size();
        if(n<2) return 0;
        if(n==2){
            return abs(nums[1]-nums[0]);
        }
        int mindiff=0, ans=0;
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++){
            mindiff = nums[i]-nums[i-1];
            ans = max(ans,mindiff);
        }
        return ans;
    }
};