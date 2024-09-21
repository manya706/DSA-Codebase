class Solution {
public:
    void dfs(int temp, int n, vector<int> &ans){
        if (temp > n){
            return;
        }

        ans.push_back(temp);
        dfs(temp * 10, n, ans);

        if (temp % 10 != 9){
            dfs(temp + 1, n, ans);
        }
    }
    vector<int> lexicalOrder(int n) {
        vector<int> ans;
        dfs(1, n, ans);
        return ans;
    }
};