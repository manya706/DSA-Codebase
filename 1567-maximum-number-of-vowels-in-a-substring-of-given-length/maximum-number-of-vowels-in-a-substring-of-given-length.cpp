class Solution {
public:
    int maxVowels(string s, int k) {
        int count=0, maxl=0;
        int i=0, j=0;
        while(j<s.size()){
            if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u'){
                count++;
            }
            if((j-i+1)>k){
                if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                    count--;
                }
                i++;
            }
            maxl = max(maxl, count);
            j++;
        }
        return maxl;
    }
};