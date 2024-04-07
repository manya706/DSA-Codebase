class Solution {
public:
    bool checkValidString(string s) {
        // bool ans=true;
        int lc=0,rc=0;
        for(char i:s){
            if(i=='('){
                lc++;
                rc++;
            }
            else if(i==')'){
                lc--;
                rc--;
            }
            else{
                lc--;
                rc++;
            }
            if(rc<0) return false;
            if(lc<0) lc =0;
        }
        return lc==0;
    }
};