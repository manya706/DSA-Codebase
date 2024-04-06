class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.length();
        int c=0;
        reverse(s.begin(),s.end());
        for(int i=0;i<n;i++){
            if(s[i]!=' '){
                c++;
            }
            else{
                if(c!=0){
                    break;
                }
            }
        }
        return c;
    }
};