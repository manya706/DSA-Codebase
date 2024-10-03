class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        long long sum = 0;
        for(long long i:nums){
            sum+=i;
        }
        sum = sum%p;
        if(sum==0) return 0;

        unordered_map<int,int> mp;
        int presum = 0;
        mp[0] = -1;
        int minlen = nums.size();

        for(int i=0; i<nums.size(); i++){
            presum = (presum + nums[i]) % p;
            int t = (presum - sum + p) % p;
            if(mp.find(t) != mp.end()) minlen = min(minlen, i-mp[t]);
            mp[presum] = i; 
        }

        return minlen == nums.size() ? -1 : minlen;
    }
};