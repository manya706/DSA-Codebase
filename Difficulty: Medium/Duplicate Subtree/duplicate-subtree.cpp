//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node
{
	char data;
	struct Node *left;
	struct Node *right;

	Node(char x) {
		data = x;
		left = NULL;
		right = NULL;
	}
};

struct Node* buildTree(string str)
{
	// Corner Case
	if (str.length() == 0 || str[0] == 'N')
		return NULL;

	// Creating vector of strings from input
	// string after spliting by space
	vector<string> ip;

	istringstream iss(str);
	for (string str; iss >> str; )
		ip.push_back(str);

	// Create the root of the tree
	Node *root = new Node(stoi(ip[0]));

	// Push the root to the queue
	queue<Node*> queue;
	queue.push(root);

	// Starting from the second element
	int i = 1;
	while (!queue.empty() && i < ip.size()) {

		// Get and remove the front of the queue
		Node* currNode = queue.front();
		queue.pop();

		// Get the current node's value from the string
		string currVal = ip[i];

		// If the left child is not null
		if (currVal != "N") {

			// Create the left child for the current Node
			currNode->left = new Node(stoi(currVal));

			// Push it to the queue
			queue.push(currNode->left);
		}

		// For the right child
		i++;
		if (i >= ip.size())
			break;
		currVal = ip[i];

		// If the right child is not null
		if (currVal != "N") {

			// Create the right child for the current node
			currNode->right = new Node(stoi(currVal));

			// Push it to the queue
			queue.push(currNode->right);
		}
		i++;
	}

	return root;
}


// } Driver Code Ends
/*The structure of the Binary Tree Node  is
struct Node
{
  char data;
  struct Node* left;
  struct Node* right;
};*/

class Solution {
  public:
    int helper(Node* root){
        if(root==NULL) return 0;
        if(!root->left && !root->right) return 1;
        if(root->left || root->right) return 2;
    } 
    int solve(Node* root, int &ans, unordered_set<string> &s){
        if(root==NULL) return 0;
        int p1, p2;
        p1 = helper(root->left);
        p2 = helper(root->right);
        string a;
        if(p1==1 && p2==0){
            a = root->data;
            a += root->left->data;
            a+="$";
            if(s.find(a)!=s.end()) ans= 1;
            s.insert(a);
        }
        else if(p1==0 && p2==1){
            a = root->data;
            a += root->right->data;
            a+="$";
            if(s.find(a)!=s.end()) ans= 1;
            s.insert(a);
        }
        else if(p1==1 && p2==1){
            a = root->data;
            a += root->left->data;
            a += root->right->data;
            if(s.find(a)!=s.end()) ans= 1;
            s.insert(a);
        }
        else {
            if(p1==2) solve(root->left,ans,s);
            if(p2==2) solve(root->right,ans,s);
        }
    }
    /*This function returns true if the tree contains 
    a duplicate subtree of size 2 or more else returns false*/
    int dupSub(Node *root) {
         // code here
         int ans=0;
         unordered_set<string> s;
         solve(root,ans,s);
         return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	
	int t;
	cin >> t;
	//cout << t << "\n";
	while (t--)
	{
		string treeString;
		getline(cin >> ws, treeString);
		struct Node* root = buildTree(treeString);
		Solution ob;
		cout << ob.dupSub(root) << "\n";
	}
	return 0;
}
// } Driver Code Ends