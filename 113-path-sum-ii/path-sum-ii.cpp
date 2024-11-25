/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void dfs(int targetSum, TreeNode* root, vector<int> &res, vector<vector<int>> &ans){
        if(root==NULL) return;
        res.push_back(root->val);
        if(root->left==NULL && root->right==NULL){
            if(targetSum==root->val){
                ans.push_back(res);
            }
        }
        dfs(targetSum-root->val, root->left, res, ans);
        dfs(targetSum-root->val, root->right, res, ans);
        res.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        // we need root to leaf solution
        vector<int> res;
        vector<vector<int>> ans;
        dfs(targetSum, root, res, ans);
        return ans;
    }
};