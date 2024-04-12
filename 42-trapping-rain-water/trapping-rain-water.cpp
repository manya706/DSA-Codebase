class Solution {
public:
    int trap(vector<int>& height) {
        int l=0, r = height.size()-1;
        int maxl= 0, maxr =0;
        int res=0;
        while(l<=r){
            if(height[l]<=height[r]){
                if(maxl<=height[l]) maxl = height[l];
                else res+= (maxl-height[l]);
                l++;
            }
            else{
                if(maxr<=height[r]) maxr = height[r];
                else res += (maxr-height[r]);
                r--;
            }
        }
        return res;
    }
};