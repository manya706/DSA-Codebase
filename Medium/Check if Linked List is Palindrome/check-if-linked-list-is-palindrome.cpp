//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




// } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
  public:
    Node* reverse_list(Node* head){
        Node* prev = NULL;
        Node* curr = head;
        Node* next;
        while(curr){
            next = curr->next;
            curr->next = prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    bool is_identical(Node* n1, Node* n2){
        for(;n1&& n2;n1=n1->next, n2 = n2->next){
            if(n1->data != n2->data) return 0;
        }
        return 1;
    }
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
        int s=0;
        Node* ptr;
        for(ptr=head;ptr;ptr=ptr->next) s++;
        if(s<2) return 1;
        ptr = head;
        int mid_pt = (s-1)/2;
        while(mid_pt--) ptr=ptr->next;
        Node* head2 = ptr->next;
        ptr->next = NULL;
        head2 = reverse_list(head2);
        bool ans = is_identical(head,head2);
        head2 = reverse_list(head2);
        ptr->next = head2;
        return ans;
    }
};



//{ Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}


// } Driver Code Ends