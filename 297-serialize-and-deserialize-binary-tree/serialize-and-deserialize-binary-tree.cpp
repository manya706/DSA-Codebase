/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(!root) return "NULL,";
        return to_string(root->val)+","+serialize(root->left)+serialize(root->right);
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        queue<string> q;
        string s;
        for(int i=0;i<data.size();i++){
            if(data[i]==','){
                q.push(s);
                s="";
                continue;
            }
            s+=data[i];
        }
        if(s.size()!=0) q.push(s);
        return deserialize_helper(q);
    }
    TreeNode* deserialize_helper(queue<string> &q){
        string s = q.front();
        q.pop();
        if(s=="NULL") return nullptr;
        TreeNode* root = new TreeNode(stoi(s));
        root->left = deserialize_helper(q);
        root->right = deserialize_helper(q);
        return root;
    }
};
