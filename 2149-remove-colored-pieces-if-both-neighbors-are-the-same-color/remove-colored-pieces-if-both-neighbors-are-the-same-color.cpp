class Solution {
public:
    bool winnerOfGame(string colors) {
        int play[2] = {0};
        int n = colors.size();
        if(n<3) return 0;
        int p1 = colors[0], p2 = colors[1];
        for(char c: colors.substr(2)){
            if(c==p1 && c==p2) play[c-'A']++;
            // cout<<colors.substr(2)<<endl;
            p1 = p2;
            p2 = c;
        }
        return play[0] > play[1];
    }
};