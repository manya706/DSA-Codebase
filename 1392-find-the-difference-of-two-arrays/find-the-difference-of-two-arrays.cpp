class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp1;
        for(int i=0;i<nums1.size();i++){
            mp1[nums1[i]]++;
        }
        unordered_map<int,int> mp2;
        for(int i=0;i<nums2.size();i++){
            mp2[nums2[i]]++;
        }
        vector<vector<int>> ans(2);
        unordered_set<int> addedToFirst; // To keep track of unique elements added to ans[0]
        for (int i = 0; i < nums1.size(); i++) {
            if (mp2.find(nums1[i]) == mp2.end() && addedToFirst.find(nums1[i]) == addedToFirst.end()) {
                ans[0].push_back(nums1[i]);
                addedToFirst.insert(nums1[i]);
            }
        }
        unordered_set<int> addedToSecond; // To keep track of unique elements added to ans[1]
        for (int i = 0; i < nums2.size(); i++) {
            if (mp1.find(nums2[i]) == mp1.end() && addedToSecond.find(nums2[i]) == addedToSecond.end()) {
                ans[1].push_back(nums2[i]);
                addedToSecond.insert(nums2[i]);
            }
        }
        return ans;
    }
};