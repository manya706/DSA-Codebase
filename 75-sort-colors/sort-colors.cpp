class Solution {
public:

    void sortColors(vector<int>& nums) {
       
        int cnt0=0, cnt1=0, cnt2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) cnt0++;
            if(nums[i]==2) cnt2++;
            if(nums[i]==1) cnt1++;
        }
        int i=0;
        while(cnt0!=0){
            nums[i] = 0;
            cnt0--;
            i++;
        }
        while(cnt1!=0){
            nums[i]=1;
            cnt1--;
            i++;
        }
        while(cnt2 != 0){
            nums[i] =2;
            cnt2--;
            i++;
        }
    }
};