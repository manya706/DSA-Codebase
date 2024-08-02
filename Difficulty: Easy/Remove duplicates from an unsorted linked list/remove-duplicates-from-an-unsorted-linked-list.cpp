//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

void print(Node *root)
{
Node *temp = root;
while(temp!=NULL)
{
cout<<temp->data<<" ";
temp=temp->next;
}
}


// } Driver Code Ends
/*
The structure of linked list is the following

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/


class Solution
{
    public:
    void insertAtTail(Node* &head, Node* &tail, int val){
        Node* temp = new Node(val);
        if(head==NULL){
            head = temp;
            tail = temp;
            return;
        }
        else{
            tail->next= temp;
            tail = temp;
        }
    }
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     // your code goes here
        if (head == NULL || head->next == NULL) return head;
        
        unordered_set<int> seen;
        Node* temp = head;
        Node* ansH = NULL;
        Node* ansT = NULL;
        
        while (temp != NULL) {
            if (seen.find(temp->data) == seen.end()) {
                seen.insert(temp->data);
                insertAtTail(ansH, ansT, temp->data);
            }
            temp = temp->next;
        }
        
        return ansH;
    }
};


//{ Driver Code Starts.

int main() {
	// your code goes here
	int T;
	cin>>T;
	
	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;
 
		for(int i=0;i<K;i++){
		int data;
		cin>>data;
			if(head==NULL)
			head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp=temp->next;
			}
		}
		
	    Solution ob;
		Node *result  = ob.removeDuplicates(head);
		print(result);
		cout<<endl;
		
	}
	return 0;
}
// } Driver Code Ends