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
int height(Node* root){
    if(root==NULL) return 0;
    int lh = height(root->left);
    int rh = height(root->right);

    return max(lh,rh)+1;
}
void addRight(Node* root, vector<int>&res){
    if(root->right==NULL) return;
    if(root->right){
        res.push_back(root->key);
        addRight(root->right,res);
    }
    else{
        res.push_back(root->key);
        addRight(root->left,res);
    }
}
void addLeft(Node* root, vector<int>&res){
    if(root->left==NULL) return;
    if(root->left){
        res.push_back(root->key);
        addLeft(root->left,res);
    }
    else{
        res.push_back(root->key);
        addLeft(root->right,res);
    }
}
void addLeaves(Node* root, vector<int>&res){
    if(root==NULL) return;
    addLeaves(root->left,res);

    if(root->left==NULL && root->right==NULL) res.push_back(root->key);
    
    addLeaves(root->right,res);
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


    cout<< "Height of Binary Tree is: "<<endl;
    cout<<height(root)<<endl;
    cout<<"Boundary order traversal: "<<endl;
    vector<int> res;
    addLeft(root,res);
    addLeaves(root,res);
    addRight(root,res);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
}