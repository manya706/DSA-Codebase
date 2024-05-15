class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int> mp;
        int n = nums.size();
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int ind=0;
        for(auto i:mp){
            nums[ind] = i.first;
            ind++;
        }
        nums.erase(nums.begin()+ind, nums.end());
        // if(ind != n){
        //     while(ind!=n){
        //         nums.erase(nums.begin()+ind);
        //         ind++;
        //     }
        // }
        return nums.size();
    }
};