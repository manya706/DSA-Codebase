#include <bits/stdc++.h>
using namespace std;
 
// A Tree node
struct Node {
  int key, head;
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
void bottomview(Node* root){
    // First element of every vertical line from left to right in a level order traversal way
    // gives bottom view of binary tree 

    if(root==NULL) return;
    // Queue will store the (node,line) using level order traversal
    queue<Node*> q;
    // Map will the store the data of line,node after checking no duplicates
    map<int,int> m;
    int head = 0;
    root->head = head;
    q.push(root);

    cout<<"Bottom view of tree is:"<<endl;
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        head= temp->head;
        // if(m.count(head)==0){
        m[head] = temp->key;
        
        if(temp->left){
            temp->left->head = head-1;
            q.push(temp->left);
        }
        if(temp->right){
            temp->right->head = head+1;
            q.push(temp->right);
        }
        // q.pop();
        // root = q.front();
    }
    for(auto i = m.begin();i!=m.end();i++) cout<<i->second<<" ";

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
    bottomview(root);
}