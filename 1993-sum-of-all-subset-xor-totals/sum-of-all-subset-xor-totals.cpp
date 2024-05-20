class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int n = nums.size();
        int sum =0;
        for(int i=0;i<(1<<n);i++){
            int sbxor = 0;
            for(int j=0;j<n;j++){
                if(i&(1<<j)){
                    sbxor ^= nums[j];
                }
            }
            sum += sbxor;
        }
        return sum;
    }
};