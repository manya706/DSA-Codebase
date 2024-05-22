class Solution {
public:
    int minOperations(vector<int>& nums) {
        // basically count each element, take mod 
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int ans=0;
        for(auto i:mp){
            int num = i.second;
            while(num){
                if(num%3==0) num-=3;
                else if(num>=2) num-=2;
                else return -1;
                ans++;
            }
        }
        return ans;
    }
};