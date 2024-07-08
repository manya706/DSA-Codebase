class Solution {
public:
    int findTheWinner(int n, int k) {
        int res = 0;
        for(int player = 2; player<=n; ++player){
            res = (res+k)%player;
        }
        return res+1;
    }
};