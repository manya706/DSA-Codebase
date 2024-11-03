/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next == NULL || k==0){
            return head;
        }
        int n=1;
        ListNode* tail = head;
        while(tail->next!=nullptr){
            n++;
            tail = tail->next;
        }
        k = k % n;
        if (k == 0) return head; 
        ListNode* newTail = head;
        for (int i = 1; i < n - k; i++) {
            newTail = newTail->next;
        }
        ListNode* newHead = newTail->next;
        newTail->next = nullptr;
        tail->next = head;
        
        return newHead;
    //     int count = 1;
    //     ListNode* curr = head;
    //     while(count<k && curr!=nullptr){
    //         curr=curr->next;
    //         count++;
    //     }

    //     ListNode* temp = curr->next;
    //     curr->next = nullptr;
    //     tail->next = head;
    //     return temp;
    }
};