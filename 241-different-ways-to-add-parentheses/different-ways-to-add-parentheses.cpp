class Solution {
public:
    vector<int> dp[21][21];
    bool isnum(char c){ return c<='9' && c>='0';}
    vector<int> solve(int i, int j, string &exp){
        if(i==j) return {exp[i]-'0'};
        if(j-i <=1 && isnum(exp[i]) && isnum(exp[j])) return {((exp[i] - '0') * 10) + (exp[j] - '0')};
        if(dp[i][j].size()>0) return dp[i][j];

        vector<int>tempans;
        for (int k = i + 1; k < j; k++) {

            // skipping iteration if char at current index is a number
            if (isnum(exp[k])) continue;


            // solution at left and right side of current symbol
            auto leftSolution = solve(i, k - 1, exp);
            auto rightSolution = solve(k + 1, j, exp);

            // calculating all possible combinations of right and left solutions
            for (int x: leftSolution) {
                for (int y: rightSolution) {
                    switch(exp[k]) {
                        case '*':
                            tempans.push_back(x * y);
                        break;
                        case '-':
                            tempans.push_back(x - y);
                        break;
                        case '+':
                            tempans.push_back(x + y);
                        break;
                    }
                }
            }
        }
        return dp[i][j] = tempans;
    }
    vector<int> diffWaysToCompute(string expression) {
        return solve(0, expression.size()-1, expression);

    }
};