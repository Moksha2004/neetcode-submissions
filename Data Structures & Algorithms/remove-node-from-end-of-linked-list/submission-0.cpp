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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode*t=head;
        int c=0;
        while(t){
            c++;
            t=t->next;
        }
        if(c==n){
            ListNode*newHead=head->next;
            return newHead;
            head->next=nullptr;
        }
        t=head;
        for(int i=0;i<c-n-1;i++) t=t->next;
        ListNode*p=t->next;
        t->next=t->next->next;
        p->next=nullptr;
        return head;
    }
};
