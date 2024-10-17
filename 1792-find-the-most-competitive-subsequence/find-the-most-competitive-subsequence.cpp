class Solution {
public:
    vector<int> mostCompetitive(vector<int>& nums, int k) {
    // We need to keep a monotonically increasing k-length subsequence
    vector<int> ans; // This stores the final answer
    int n = nums.size() - k; // Number of elements we can remove

    // Iterate through all elements in the input array `nums`
    for (auto i : nums) {
        // While the answer stack is not empty, and:
        // 1. The last element in `ans` is greater than the current element `i`
        // 2. We still have the option to remove more elements (`n > 0`)
        while (!ans.empty() && ans.back() > i && n > 0) {
            ans.pop_back(); // Remove the last element
            n--; // Decrease the number of elements we can remove
        }

        // Push the current element into the answer vector
        ans.push_back(i);
    }

    // If `ans` has more than `k` elements, pop the extras from the back
    while (n--) ans.pop_back();

    // Return the most competitive subsequence of length `k`
    return ans;

    }
};