class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,bool> mp;
        for(int i=0;i<arr.size();i++){
            if(mp.find(arr[i])!=mp.end()){
                mp[arr[i]]=false;
            } else mp[arr[i]] = true;
        }
        int c=0;
        for(auto i:arr){
            if(mp[i]==true){
                c++;
                if(c==k) return i;
            }
        }
        return "";
    }
};