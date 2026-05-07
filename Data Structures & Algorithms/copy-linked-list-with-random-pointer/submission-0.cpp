/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    

    Node* copyRandomList(Node* head) {
        unordered_map<Node*, Node*> cpy;
        cpy[NULL]=NULL;
        Node*cur=head;
        while(cur){
           Node* t=new Node(cur->val);
           cpy[cur]=t;
           cur=cur->next;
        }
        cur=head;
        while(cur){
            Node* t=cpy[cur];
            t->next=cpy[cur->next];
            t->random=cpy[cur->random];
            cur=cur->next;
        }
        return cpy[head];
    }
};
