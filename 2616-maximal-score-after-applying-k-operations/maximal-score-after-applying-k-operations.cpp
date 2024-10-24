class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        long long ans=0;
        priority_queue<int> pq (nums.begin(), nums.end());
        while(k>0){
            ans += pq.top();
            int t = pq.top();
            pq.pop();
            pq.push((t+2)/3);
            k--;
        }
        return ans;
    }
};
static const auto ms = []() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
}();