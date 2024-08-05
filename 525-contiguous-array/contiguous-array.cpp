class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> mp;
        int maxl =0;
        int count =0;
        mp[0]=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) count-=1;
            else if(nums[i]==1){
                count+=1;
            }
            if(mp.find(count)!=mp.end()){
                maxl = max(maxl, i-mp[count]);
            } else {
                mp[count] = i;
            }
        }
        return maxl;
    }
};