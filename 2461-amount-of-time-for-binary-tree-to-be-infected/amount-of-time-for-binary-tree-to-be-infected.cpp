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
    void graph(TreeNode* curr, TreeNode* parent, unordered_map<int, vector<int>> &adj){
        if(curr){
            if(parent) adj[curr->val].push_back(parent->val);
            if(curr->left) adj[curr->val].push_back(curr->left->val);
            if(curr->right) adj[curr->val].push_back(curr->right->val);

            graph(curr->left,curr,adj);
            graph(curr->right,curr,adj);
        }
        return;
    }
    int amountOfTime(TreeNode* root, int start) {
        unordered_map<int, vector<int>> adj;
        graph(root,nullptr,adj);

        queue<int> q;
        unordered_set<int> vis;
        q.push(start);
        vis.insert(start);

        int min=0;

        while(!q.empty()){
            int s = q.size();
            while(s--){
                int front = q.front();
                q.pop();
                for(int &neighbour:adj[front]){
                    if(vis.find(neighbour)==vis.end()){
                        q.push(neighbour);
                        vis.insert(neighbour);
                    }
                }
            }
            min++;
        }
        return --min;

    }
};