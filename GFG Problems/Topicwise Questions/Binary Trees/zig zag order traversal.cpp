#include <bits/stdc++.h>
using namespace std;
 
// A Tree node
struct Node {
  int key;
  struct Node *left, *right;
};
 
// Utility function to create a new node
Node* newNode(int key)
{
  Node* temp = new Node;
  temp->key = key;
  temp->left = temp->right = NULL;
  return (temp);
}
int diameter(Node* root, int maxi){
    if(root==NULL) return 0;
    int lh = diameter(root->left,maxi);
    int rh = diameter(root->right,maxi);
    maxi = max(maxi,lh + rh);
    return 1+max(lh,rh);
}
vector<vector<int>> zigzagLevelOrder(Node* root) {
        if(!root) return {};
        vector<vector<int>> ans;
        deque<Node*> dq;
        dq.push_back(root);
        bool ltr = true;
        while(!dq.empty()){
            int l = dq.size();
            vector<int>level;
            while(l--){
                if(!ltr){
                    root= dq.back();
                    dq.pop_back(); // pop from back
                    level.push_back(root->key); 
                    if (root->right) dq.push_front(root->right); // push child from front
                    if (root->left) dq.push_front(root->left);
                }
                else{
                    root = dq.front();
                    dq.pop_front(); // pop from front
                    level.push_back(root->key); 
                    if (root->left) dq.push_back(root->left); // push child from back
                    if (root->right) dq.push_back(root->right);
                }
            }
            ans.push_back(level);
            ltr = !ltr;
        }
        return ans;
}
int main(){
    Node* root= newNode(1); 
    root -> left = newNode(0);
    root -> right = newNode(2);

    root -> right -> right = newNode(4);
    root -> right -> left = newNode(3);

    cout<< "Diameter of Binary Tree is: "<<endl;

    cout<<diameter(root,0);
}