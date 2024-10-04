class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(), skill.end());
        int n = skill.size();
        int req = skill[0]+skill[n-1]; // req sum for each team
        long long chem=0;
        for(int i=0;i<n/2;i++){
            if(skill[i]+skill[n-i-1]!=req) return -1;
            chem += skill[i]*skill[n-i-1];
        }
        return chem;
    }
};