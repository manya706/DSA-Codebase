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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        if (!root) return ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int s = q.size();
            vector<int> t;
            while(s--){
                TreeNode* temp = q.front();
                q.pop();
                t.push_back(temp->val);

                if(temp->left){
                    q.push(temp->left);
                    // t.push_back(temp->left->val);
                }
                if(temp->right){
                    q.push(temp->right);
                    // t.push_back(temp->right->val);
                } 
            }
            ans.push_back(t);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};