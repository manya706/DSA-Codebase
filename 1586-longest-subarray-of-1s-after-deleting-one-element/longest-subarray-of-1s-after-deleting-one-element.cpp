class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int l=0, s=0, e=0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                l++;
            }
            else {
                s = max(s,l);
                l -= e;
                e = l;
            }
        }
        s = max(s,l);
        return s==n ? s-1:s;
    }
};