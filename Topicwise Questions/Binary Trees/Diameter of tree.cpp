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
int main(){
    Node* root= newNode(1); 
    root -> left = newNode(0);
    root -> right = newNode(2);

    root -> right -> right = newNode(4);
    root -> right -> left = newNode(3);

    cout<< "Diameter of Binary Tree is: "<<endl;

    cout<<diameter(root,0);
}