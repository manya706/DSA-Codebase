// Given the root of a binary tree, check whether it is a mirror of itself (i.e., symmetric around its center).
#include <bits/stdc++.h>
using namespace std;
 
// A Tree node
struct Node {
  int key, head,next;
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

int print_tree(Node* root){
    // preorder printing 
    if(root==NULL) return 0;
    cout<<root->key<<" ";
    print_tree(root->left);
    print_tree(root->right);
}
bool check_symmetry(Node* root1 , Node* root2){
    if(root1 ==NULL && root2==NULL) return true;
    if(root1==root2 && root1->key == root2->key){
        return check_symmetry(root1->left, root2->right) && check_symmetry(root1->right,root2->right);
    }
    return false;
}
void flatten(Node* root){
    if(root==NULL) return;
        Node* curr = root, *pre;
        while(curr!=NULL){
            if(curr->left!=NULL){ 
                pre = curr->left;
                //traverses from the right child of pre to the rightmost leaf node of the left subtree
                while(pre->right!=NULL) pre = pre->right;
                // connects the right subtree of the current node to the rightmost leaf node of the left subtree
                pre->right = curr->right;
                //  moves the entire left subtree to the right side of the current node
                curr->right = curr->left;
                // detach the left subtree from the current node
                curr->left = NULL;
            }
            curr = curr->right;
        }
}
Node* buildtree(vector<int>& preorder,int prestart, int preend, vector<int>& inorder,int instart, int inend, map<int,int>& inmap){
    if(prestart>preend || instart>inend) return NULL;
    Node* root = newNode(preorder[prestart]);
    int inroot = inmap[root->key];
    int numsleft = inroot - instart;
    root->left = buildtree(preorder,prestart+1,prestart+numsleft,inorder, instart ,inroot-1, inmap);
    root->right = buildtree(preorder,prestart+numsleft+1,preend,inorder, inroot+1 ,inend, inmap);
    return root;
}
Node* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int,int> inmap;
        for(int i=0;i<inorder.size();i++){
            inmap[inorder[i]] = i;
        }
        Node* root = buildtree(preorder,0,preorder.size()-1,inorder, 0 ,inorder.size()-1, inmap);
        return root;
    }

int sumnode(Node* root, int currsum){
    if(root==NULL) return 0;
    currsum = currsum*10 + root->key;
    if(root->left==NULL && root->right==NULL) return currsum;
    int lh = sumnode(root->left, currsum);
    int rh = sumnode(root->right, currsum);
    return lh+rh;
}
Node* lowestCommonAncestor(Node* root, Node* p, Node* q) {
        if(root==NULL || root==p || root==q) return root;
        Node* left = lowestCommonAncestor(root->left,p,q);
        Node* right = lowestCommonAncestor(root->right,p,q);
        // If both the left and right results are not NULL, it means that both p and q are found in different subtrees, so the current node root is their lowest common ancestor. Therefore, the function returns root.
        if(left!=NULL && right!=NULL) return root;
        // only left is not NULL and right is NULL, it means that both p and q are present in the left subtree. In this case, the lowest common ancestor lies in the left subtree, so the function returns left
        else if(left!=NULL && right==NULL) return left;
        // neither of the above conditions is met, it means that p and q are both in the right subtree, so the function returns right.
        return right;
    }
int main(){
    Node* root = newNode(20);
    root->left = newNode(8);
    root->left->left = newNode(4);
    root->left->right = newNode(12);
    root->left->right->left = newNode(10);
    root->left->right->right = newNode(14);
    root->right = newNode(22);
    root->right->right = newNode(25);

    cout<<"Original tree:"<<endl;
    print_tree(root);
    cout<<endl;
    cout<<sumnode(root,0); 
}