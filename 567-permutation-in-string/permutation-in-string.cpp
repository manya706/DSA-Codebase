class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        // to check if anagram of s1 exists in s2
        // we need to store the fequency of the occuring letters
        // create a frequency table and then use sliding window approach to find substring
        int m = s1.size(), n = s2.size();
        if(m>n) return false;
        vector<int> freq(26, 0), window(26, 0);

        for(char c:s1){
            freq[c-'a']++; 
        }
        // initializing first window of size m
        for(int i=0;i<m;i++){
            window[s2[i]-'a']++;
        }
        for(int i=0;i<=n-m;i++){
            if(freq==window) return true;
            if(i+m<n){
                window[s2[i]-'a']--;
                window[s2[i+m]-'a']++;
            }
        }
        return freq==window;
    }
};