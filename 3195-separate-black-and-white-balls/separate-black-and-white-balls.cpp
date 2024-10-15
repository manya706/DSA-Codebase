class Solution {
public:
    long long minimumSteps(string s) {
        // by just reading the question feels like a 2-pointer problem.
        // traverse left to right
        // count every black ball as we need to swap them back to right side
        long long swap=0;
        long long black =0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1') black++;
            else {
                swap += black;
            }
        }
        return swap;
    }
};