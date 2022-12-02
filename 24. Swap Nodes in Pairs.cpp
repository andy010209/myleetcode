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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL||head->next==NULL) return head;
        ListNode* s1=head;
        ListNode* s2=head->next;
        if(s2->next==NULL){
            head=s2;
            s2->next=s1;
            s1->next=NULL;
            return head;
        }
        ListNode* s3=head->next->next;
        head=s2;
        while(1){
            if(s3->next==NULL){
                s1->next=s3;
                s2->next=s1;
                break;
            }
            s1->next=s3->next;
            s2->next=s1;
            
            s1=s3;
            s2=s3->next;
            s3=s3->next->next;
            if(s3==NULL){
                s2->next=s1;
                s1->next=NULL;
                break;
            }
        }
        return head;
    }
};