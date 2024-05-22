class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;
        int n = arr.size();
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        vector<int> freq;
        for(auto i: mp){
            freq.push_back(i.second);
        }
        sort(freq.begin(),freq.end());
        bool flag = true;
        for(int i=1;i<freq.size();i++){
            if(freq[i-1]<freq[i]){
                flag = true;
            }
            else if(freq[i-1]==freq[i]){
                flag = false;
                break;
            }
        }
        return flag;
    }
};