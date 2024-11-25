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
    void dfs(TreeNode* root, int targetSum, int &count, vector<int> &path){
        if(root==NULL) return;
        path.push_back(root->val);
        dfs(root->left, targetSum, count, path);
        dfs(root->right, targetSum, count, path);
        int n = path.size();
        long long sum=0;
        for(int i=n-1;i>=0;i--){
            sum+=path[i];
            if(sum==targetSum) count++;
        }
        path.pop_back();
    }
    int pathSum(TreeNode* root, int targetSum) {
        int count =0;
        vector<int> path;
        dfs(root,targetSum,count,path);
        return count;
    }
};