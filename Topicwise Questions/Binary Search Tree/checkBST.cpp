#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    struct TreeNode *left, *right;
};
struct TreeNode*  newNode(int item){
    struct TreeNode* temp = (struct TreeNode*)malloc(sizeof(TreeNode));
    temp->val = item;
    temp->left = temp->right = NULL;
    return temp;
}
struct TreeNode* insert(struct TreeNode* root,int value){
    if(root==NULL) return newNode(value);
    if(value < root->val) root->left = insert(root->left, value);
    else if(value > root->val) root->right = insert(root->right, value);
    return root;
}
void printLeaves(struct TreeNode* root){
    if(!root) return;
    if(!root->left && !root->right) {
        cout<<" "<<root->val;
    }
    if(root->left) printLeaves(root->left);
    if(root->right) printLeaves(root->right);
}
int height(struct TreeNode* node)
{
    if (node == NULL)
        return 0;
    else {
  
        // Compute the depth of each subtree
        int lDepth = height(node->left);
        int rDepth = height(node->right);
  
        // Use the larger one
        if (lDepth > rDepth)
            return (lDepth + 1);
        else
            return (rDepth + 1);
    }
}
void levelPrint(struct TreeNode* root, int l){
    if(!root) return;
    if(l==1) cout<<root->val<<" ";
    else if(l>1){
        levelPrint(root->left, l--);
        levelPrint(root->right, l--);
    }
}
void rightview(struct TreeNode* root, int* max_l, int curr_l){
    if(!root) return;
    if(*max_l < curr_l){
        cout<<root->val<<" ";
        *max_l = curr_l;
    }
    
    rightview(root->right, max_l,curr_l+1);
    rightview(root->left, max_l,curr_l+1);
}
void leftview(struct TreeNode* root, int* max_r, int curr_l){
    if(!root) return;
    if(*max_r < curr_l){
        cout<<root->val<<" ";
        *max_r = curr_l;
    }
    leftview(root->left, max_r,curr_l+1);
    leftview(root->right, max_r,curr_l+1);
}
bool check(Node* root, int min, int max){
        if(root==NULL) return 1;
        if(root->data>min && root->data<max){
            bool left = check (root->left, min, root->data);
            bool right = check(root->right, root->data, max);
            return left&&right;
        }
        else return false;
}
int main(){
    struct TreeNode* root = NULL;
  
    // Creating the BST
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);
  

    cout<<height(root)<<endl;
    levelPrint(root,2);
    cout<<endl;
    printLeaves(root);
    cout<<endl;
    int max_l =0;
    rightview(root,&max_l,1);
    cout<<endl;
    int max_r = 0;
    leftview(root,&max_r,1);
}
