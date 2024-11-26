class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if(p.size()>s.size()) return {};
        map<char,int> mp;
        int n = p.size();
        for(char c:p) mp[c]++;

        map<char,int> freq;
        vector<int> ans;

        for(int i=0;i<n;i++){
            freq[s[i]]++;
        }
        if(freq==mp) ans.push_back(0);
        for(int i=n;i<s.size();i++){
            freq[s[i]]++;
            freq[s[i-n]]--;
            if(freq[s[i-n]]==0) freq.erase(s[i-n]);
            if(freq==mp) ans.push_back(i-n+1);
        }
        return ans;
    }
};