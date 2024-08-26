//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};


Node *buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current Node's value from the string
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

            // Create the right child for the current Node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends
//User function Template for C++

/*
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

class Solution {
  public:
    int getDistance(unordered_map<Node*, Node*> &mpp, Node* target){
        unordered_map<Node*, int> vis;
        queue<Node*> q;
        q.push(target);
        vis[target] = 1;
        int maxi=0;
        while(!q.empty()){
            int n = q.size();
            int fl = 0;
            for(int i=0;i<n;i++){
                Node* temp = q.front();
                q.pop();
                if(temp->left && !vis[temp->left]){
                    fl = 1;
                    vis[temp->left] = 1;
                    q.push(temp->left);
                }
                if(temp->right && !vis[temp->right]){
                    fl = 1;
                    vis[temp->right] = 1;
                    q.push(temp->right);
                }
                if(mpp[temp] && !vis[mpp[temp]]){
                    fl = 1;
                    vis[mpp[temp]] = 1;
                    q.push(mpp[temp]);
                }
            }
            if(fl) maxi++;
        }
        return maxi;
    }
    Node* bfsGetTarget(Node* root, int target, unordered_map<Node*, Node*> &mpp){
        queue<Node*>q;
        q.push(root);
        Node* ans;
        while(!q.empty()){
            Node* temp = q.front();
            q.pop();
            if(temp->data == target){
                ans = temp;
            } 
            if(temp->left){
                q.push(temp->left);
                mpp[temp->left] = temp;
            }
            if(temp->right){
                q.push(temp->right);
                mpp[temp->right] = temp;
            }
        }
        return ans;
    }
    int minTime(Node* root, int target) 
    {
        // Your code goes here
        unordered_map<Node*, Node*> mpp; // to store child parent
        Node* start = bfsGetTarget(root, target, mpp);
        int maxi = getDistance(mpp, start);
        return maxi;
    }
};

//{ Driver Code Starts.

int main() 
{
    int tc;
    scanf("%d ", &tc);
    while (tc--) 
    {    
        string treeString;
        getline(cin, treeString);
        // cout<<treeString<<"\n";
        int target;
        cin>>target;
        // cout<<target<<"\n";

        Node *root = buildTree(treeString);
        Solution obj;
        cout<<obj.minTime(root, target)<<"\n"; 

        cin.ignore();

    }


    return 0;
}

// } Driver Code Ends