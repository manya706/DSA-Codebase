class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        int n = nums.size();
        long long ans=0;
        priority_queue<int> pq;
        for(auto i:nums){
            pq.push(i);
        }
        while(k>0){
            ans += pq.top();
            int t = pq.top();
            pq.pop();
            pq.push((t+3-1)/3);
            k--;
        }
        return ans;
    }
};