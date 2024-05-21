class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // something like count sort
        int n=nums.size();
        if(n==0) return 0;
        sort(nums.begin(),nums.end());
        int c=1;
        int maxc=0;
        for(int i=1;i<n;i++){
            if(nums[i]!=nums[i-1]){
                if(nums[i]==nums[i-1]+1) c++;
                else{
                    maxc = max(maxc, c);
                    c = 1;
                }
            }
        }
        return max(maxc,c);
    }
};