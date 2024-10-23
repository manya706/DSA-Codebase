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
    TreeNode* replaceValueInTree(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            int s = q.size();
            int s_ = s;
            map<TreeNode*, int> mp;
            int sum=0;
            queue<TreeNode*> temp;
            while(s--){
                auto it = q.front();
                temp.push(it);
                q.pop();
                
                if(it->left) {
                    mp[it]+=it->left->val;
                    sum+=it->left->val;
                    q.push(it->left);
                }
                if(it->right) {
                    mp[it]+=it->right->val;
                    sum+=it->right->val;
                    q.push(it->right);
                }
            }
            while(s_--){
                auto it = temp.front();
                temp.pop();
                if(it->left){
                    it->left->val = sum-mp[it];
                }
                if(it->right){
                    it->right->val = sum-mp[it];
                }
            }
        }
        root->val = 0;
        return root;
    }
};