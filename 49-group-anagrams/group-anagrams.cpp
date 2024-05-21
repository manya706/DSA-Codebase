class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        // using map we can do this
        unordered_map<string,vector<string>> mp;
        for(auto i:strs){
            string w = i;
            sort(w.begin(), w.end());
            mp[w].push_back(i);
        }
        for(auto i:mp){
            ans.push_back(i.second);
        }
        return ans;
    }
};