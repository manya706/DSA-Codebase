class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int res = 0;
        int n = pref.size();
        bool flag = false;
        for(string s: words){
            for(int i=0;i<n;i++){
                if(s[i]==pref[i]){
                    flag = true;
                }
                else{
                    flag = false;
                    break;
                }
            }
            if(flag==true) res++;
        }
        return res;
    }
};