class Solution {
public:
    int bit(int x, int k){
        return (x>>k) & 1;
    }
    vector<int> singleNumber(vector<int>& nums) {
        // could have easily done using map but it needs constant space
        // maybe can be done using two pointer approach
        // OOOO CAN BE DONE USING XOR
        // 1^1 = 0
        int xorxy = 0;
        for(int n:nums){
            xorxy ^= n;
        }
        int pos =0;
        while(!bit(xorxy,pos)) pos++;
        int x=0;
        for(int n:nums){
            if(bit(n, pos)) x^= n;
        }
        int y = xorxy^x;
        return {x,y};
    }
};