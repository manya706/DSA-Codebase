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

void printnew(Node* root){
    if (root == NULL)
        return;
    cout<<root->key<<" ";
    printnew(root->left);
    printnew(root->right);
    
}
int main(){
    Node* root= newNode(1); 
    root -> left = newNode(0);
    root -> right = newNode(2);

    root -> right -> right = newNode(4);
    root -> right -> left = newNode(3);
    printnew(root);
}