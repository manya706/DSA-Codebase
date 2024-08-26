class Solution {
public:
    int func(vector<int> &cost, vector<int> &dp, int i){
        if(i>=cost.size()) return 0;
        if(dp[i]!=-1) return dp[i];
        int from1 = func(cost,dp,i+1);
        int from2 = func(cost,dp,i+2);
        return dp[i] = cost[i]+min(from1,from2);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        if(cost.size()==0) return 0;
        if(cost.size()==1) return cost[0];
        vector<int> dp(cost.size()+1, -1);
        int op1 = func(cost,dp,0);
        int op2 = func(cost,dp,1);
        return min(op1,op2);
    }
};