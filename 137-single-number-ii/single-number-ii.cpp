class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // only constant extra space and linear time
        // using XOR
        int a=0,b=0;
        for(auto x:nums){
            a = (a^x) & ~b;
            b = (b^x) & ~a;
        }
        return a;
    }
};