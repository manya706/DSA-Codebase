#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* next;
    Node(int data){
        this->data = data;
        next = NULL;
    }
};

struct Linklist{
    Node* head;
    Linklist() {
        head = NULL;
    }
    void reverse(){
        Node* current = head;
        Node* prev = NULL;
        Node* next = NULL;

        while(current!=NULL){
            next = current->next;
            current ->next = prev;
            prev=current;
            current = next;
        }
        head = prev;
    }
    void remove(int n){
        Node* dummy = head;
        while(n>=0){
            if(n==0){
                head= dummy;
                head->next = head->next->next;
            }
            dummy=head->next;
            n--;
        }
    }
    /* Function to print linked list */
    void print()
    {
        struct Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout<<"NULL";
    }
    void push(int data){
        Node* temp = new Node(data);
        temp->next = head;
        head = temp;
    }
};

int main(){
    Linklist l;
    l.push(20);
    l.push(90);
    l.push(22);
    l.push(76);
    l.push(6);
    l.push(7);

    cout<<"Link link:"<<endl;
    l.print();
    cout<<endl;
    // l.reverse();
    // cout<<"Reversed link list:"<<endl;
    // l.print();
    // cout<<endl;
    cout<<"removed nth node"<<endl;
    l.remove(2);
    l.print();
}