class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        // using hashmap and sorting
        vector<int> temp = arr;
        sort(temp.begin(), temp.end());
        temp.erase(unique(temp.begin(), temp.end()), temp.end()); 
        unordered_map<int,int> mp;
        for(int i=0;i<temp.size();i++){
            mp[temp[i]] = i+1;
        }
        for(int i=0;i<arr.size();i++){
            arr[i] = mp[arr[i]];
        }
        return arr;
    }
};