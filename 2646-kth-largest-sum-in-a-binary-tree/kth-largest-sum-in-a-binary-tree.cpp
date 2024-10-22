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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        // bfs level order traversal
        priority_queue<long long> pq;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            long long sum=0;
            while(n--){
                TreeNode *node  = q.front();
                q.pop();
                sum += (long long)node->val;
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            pq.push(sum);
        }
        if (pq.size() < k) return -1;
        long long ans = -1;
        while(k-- > 0 && !pq.empty()){
            ans = pq.top();
            pq.pop();
        }
        return ans != -1 ? ans : -1;
    }
};