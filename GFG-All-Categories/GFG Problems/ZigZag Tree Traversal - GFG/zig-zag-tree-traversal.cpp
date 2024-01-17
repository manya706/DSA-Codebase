//{ Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}


// Function to Build Tree
Node* buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N') return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;) ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

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

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size()) break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends
//User function Template for C++
/*Structure of the node of the binary tree is as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    // vector <int> zigZagTraversal(Node* root)
    // {
    // 	// Code here
    // 	//bascially level order only but with left-to-right flag
    // 	deque<Node*>dq;
    // 	vector<int> level;
    // 	dq.push_back(root);
    // 	bool ltr=true; //for odd level
    // 	while(!dq.empty()){
    // 	    int s = dq.size();
    // 	    for(int i=0;i<s;i++){
    // 	        if(ltr){
    // 	            root= dq.back();
    //                 dq.pop_back(); // pop from back
    //                 level.push_back(root->data); 
    //                 if(root->left) dq.push_front(root->left);
    //                 if(root->right) dq.push_front(root->right);
    // 	        }
    // 	        else{
    // 	            root=dq.front();
    // 	            dq.pop_front();
    // 	            level.push_back(root->data);
    // 	            if(root->right) dq.push_back(root->right);
    // 	            if(root->left) dq.push_back(root->left);
    // 	        }
    // 	        ltr = !ltr;
    	        
    // 	    }
    // 	}
    // 	return level;
    // }
    vector<int> zigZagTraversal(Node* root)
{
    if (!root)
        return {};

    vector<int> result;
    deque<Node*> dq;
    dq.push_back(root);
    bool ltr = true;

    while (!dq.empty()) {
        int levelSize = dq.size();
        vector<int> level;

        for (int i = 0; i < levelSize; i++) {
            if (ltr) {
                Node* node = dq.front();
                dq.pop_front();
                level.push_back(node->data);

                if (node->left)
                    dq.push_back(node->left);

                if (node->right)
                    dq.push_back(node->right);
            } else {
                Node* node = dq.back();
                dq.pop_back();
                level.push_back(node->data);

                if (node->right)
                    dq.push_front(node->right);

                if (node->left)
                    dq.push_front(node->left);
            }
        }

        ltr = !ltr;
        result.insert(result.end(), level.begin(), level.end());
    }

    return result;
}

};

//{ Driver Code Starts.

/* Driver program to test size function*/

  

int main() {

   
    int t;
    scanf("%d ", &t);
    while (t--) {
        string s, ch;
        getline(cin, s);
        
        Node* root = buildTree(s);

        vector<int> ans;
        Solution ob;
        ans = ob.zigZagTraversal(root) ;

        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << " ";

        cout << endl;
     
    }
    return 0;
}

// } Driver Code Ends