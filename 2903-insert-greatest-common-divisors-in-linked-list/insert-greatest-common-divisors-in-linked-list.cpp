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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp = head;
        while(temp->next){
            int val2 = temp->next->val;
            int val1 = temp->val;
            int v =__gcd(val1,val2);
            ListNode* middle = new ListNode(v);
            middle->next = temp->next;
            temp->next = middle;
            temp = temp->next->next;
        }
        return head;
    }
};