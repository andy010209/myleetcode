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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* l=new ListNode();
        ListNode* l1=list1;
        ListNode* l2=list2;
        ListNode* top=l;
        while(l1&&l2){
            if(l1->val>=l2->val){
                l->next=l2;
                l2=l2->next;
                l=l->next;
            }
            else{
                l->next=l1;
                l1=l1->next;
                l=l->next;
            }
        }
        if(l1==NULL){
            l->next=l2;
        }
        else if(l2==NULL){
            l->next=l1;
        }
        return top->next;
    }
};