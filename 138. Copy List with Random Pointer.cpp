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
        Node* t1=head;
        Node* head2=NULL;
        Node* t2=head2;
        unordered_map<Node*,Node*> m;
        while(t1){
            if(head2==NULL){
                head2=new Node(head->val);
                t2=head2;
                t1=t1->next;
                continue;
            }
            t2->next=new Node(t1->val);
            t2=t2->next;
            t1=t1->next;
        }
        t1=head;
        t2=head2;
        while(t1){
            m[t1]=t2;
            t1=t1->next;
            t2=t2->next;
        }

        t1=head;
        t2=head2;
        while(t1){
            Node* c=t1->random;
            t2->random=m[c];
            t1=t1->next;
            t2=t2->next;
        }
        return head2;
    }
};