class Solution {
public:
    vector<int> mostCompetitive(vector<int>& nums, int k) {
    vector<int> ans; 
    int n = nums.size() - k; // Number of elements we can remove

    for (auto i : nums) {
        // While the answer stack is not empty, and:
        // 1. The last element in `ans` is greater than the current element `i`
        // 2. We still have the option to remove more elements (`n > 0`)
        while (!ans.empty() && ans.back() > i && n > 0) {
            ans.pop_back(); 
            n--; 
        }

        ans.push_back(i);
    }

    // If `ans` has more than `k` elements, pop the extras from the back
    while (n--) ans.pop_back();

    return ans;

    }
};