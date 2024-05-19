class Solution {
public:
    vector<vector<string>> ans;
    bool col[10], row[10], diag1[20], diag2[20];
    void dfs(vector<string>& cur, int n)
    {
        if (cur.size() == n)
        {
            ans.push_back(cur);
            return;
        }

        int i = cur.size();
        cur.push_back(string(n, '.'));
        for (int j = 0; j < n; j++)
        {
            if (!col[j] && !diag1[i - j + 8] && !diag2[i + j])
            {
                cur[i][j] = 'Q';
                col[j] = diag1[i - j + 8] = diag2[i + j] = true;
                dfs(cur, n);
                cur[i][j] = '.';
                col[j] = diag1[i - j + 8] = diag2[i + j] = false;
            }
        }

        cur.pop_back();
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string> answer;
        dfs(answer,n);
        return ans;
    }
};