class Solution {
public:
    int largestCombination(vector<int>& candidate) {
        vector<int> b(32);
        for(int i=0;i<candidate.size();i++){
            int t = 31; 
            while(candidate[i]>0){
                b[t] += candidate[i]%2;
                candidate[i] /= 2;
                t--;
            }
        }
        int res=0;
        for(int i=0;i<32;i++){
            res = max(res, b[i]);
        }
        return res;
    }
};