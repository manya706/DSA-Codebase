//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    // function for reversing the number 
    Node* reverseNumber(Node* head){
        Node* curr = head, *prev=NULL;
        while(curr!=NULL){
            curr = head->next;
            head->next = prev;
            prev = head;
            head = curr;
        }
        return prev;
    }
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* num1, struct Node* num2)
    {
        // code here
        Node* h1 = reverseNumber(num1);
        Node* h2 = reverseNumber(num2);
        Node* t1 = h1, * t2 = h2, * dm = new Node(-1);
        Node* dh = dm;
        int s,c=0;
        while(t1!=NULL || t2!=NULL)
        {
            s=0;
            if(t1!=NULL)
            {
                s+=t1->data;
                t1=t1->next;
            }
            if(t2!=NULL)
            {
                s+=t2->data;
                t2=t2->next;
            }
            s=s+c;
            Node *temp=new Node(s%10);
            if(s<10) 
                {
                    dh->next=temp;
                    c=0;
                    dh=dh->next;
                }
            else
            {
                dh->next=temp;
                c=1;
                dh=dh->next;
            }
        }
        Node *nh=reverseNumber(dm->next);
        if(c==1)
        {
            Node *nt=new Node(c);
            nt->next=nh;
            nh=nt;
        }
       while(nh->data==0 && nh->next!=NULL)//for trailing zeroes 
       {
           nh=nh->next;
       }
        return nh;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* num1 = buildList(n);
        
        cin>>m;
        Node* num2 = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(num1,num2);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends