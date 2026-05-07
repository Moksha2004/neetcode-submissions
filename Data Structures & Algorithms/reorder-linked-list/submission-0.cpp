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
    void reorderList(ListNode* head) {
        ListNode*slow=head; ListNode*fast=head;
        while(fast && fast->next) {
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode*second=slow->next;
        ListNode*prev= slow->next =nullptr;
                while(second){
            ListNode*temp=second->next;
            second->next=prev;
            prev=second;
            second=temp;
        }
        ListNode*first=head;
        second=prev;
        while(second){
            ListNode*t=first->next;
            ListNode*t1=second->next;
            first->next=second;
            second->next=t;
            first=t;
            second=t1;
        }
    }
};
