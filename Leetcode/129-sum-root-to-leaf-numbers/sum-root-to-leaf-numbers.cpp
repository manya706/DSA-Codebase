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
    int solve(TreeNode* root, int current){
        if(root==NULL) return 0;
        current = current*10 + root->val;
        if(root->left==NULL && root->right ==NULL) return current;
        int l = solve(root->left,current);
        int r = solve(root->right,current);
        return l+r;
    }
    int sumNumbers(TreeNode* root) {
        int current =0;
        return solve(root,current);
    }
};