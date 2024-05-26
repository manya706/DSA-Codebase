class Solution {
private:
 static const int MOD = 1000000000 + 7;
public:
    int checkRecord(int n) {
        // first thought, combinatorics but after further thought
        // Dynamic programming
        vector<vector<int>> prevdp(2, vector<int>(3, 1));
        for(int i=1;i<=n;i++){
            vector<vector<int>> newdp(2, vector<int>(3, 0));
            for(int a=0;a<2;a++){
                for(int l=0;l<3;l++){
                    newdp[a][l] += prevdp[a][2];
                    if(a>0){
                        newdp[a][l] += prevdp[a-1][2];
                        newdp[a][l] %= MOD;
                    }
                    if(l>0){
                        newdp[a][l] += prevdp[a][l-1];
                        newdp[a][l] %= MOD;
                    }
                }
            }
            prevdp = newdp;
        }
        return prevdp[1][2];
    }
};