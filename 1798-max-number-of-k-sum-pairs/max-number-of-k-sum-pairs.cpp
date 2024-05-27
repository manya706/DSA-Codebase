class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        // hash table or two-pointers
        ios_base ::sync_with_stdio(false), cin.tie(0), cout.tie(0);
        int n = nums.size();
        int s=0, e= n-1;
        sort(nums.begin(),nums.end());
        int c=0;
        while(s<e){
            if(nums[s]+nums[e]==k){
                c++;
                s++;
                e--;
            }
            else if(nums[s]+nums[e]>k) e--;
            else s++;
        }
        return c;
    }
};