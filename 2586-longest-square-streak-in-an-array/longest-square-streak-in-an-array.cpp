class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        set<long long> numset;
        for(int i:nums) numset.insert(i);
        int ans=0;
        for(int num:numset){
            int len=0;
            long long curr=num;
            while(numset.find(curr)!=numset.end()){
                len++;
                if(curr>100000) break;
                curr = curr*curr;

            }
            if(len>1){
                ans = max(len,ans);
            }
        }
        return ans > 1 ? ans : -1;
    }
};
static const auto ms = []() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
}();