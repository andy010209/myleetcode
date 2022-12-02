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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* p1=l1;
        ListNode* p2=l2;
        ListNode* atn=new ListNode(0);
        ListNode* p3=atn;
        atn->next=l1;
        int a=0;
        while(p1!=nullptr&&p2!=nullptr){
            a=a+p1->val+p2->val;
            p1->val=a%10;
            a/=10;
            p3=p1;
            p1=p1->next;
            p2=p2->next;
        }
        
        while(p1!=nullptr){
            a=a+p1->val;
            p1->val=a%10;
            a/=10;
            p3=p1;
            p1=p1->next;
        }
        
        if(p2!=nullptr) p3->next=p2;
        while(p2!=nullptr){
            a=a+p2->val;
            p2->val=a%10;
            a/=10;
            p3=p2;
            p2=p2->next;
        }
        if(a) p3->next=new ListNode(1);
        return atn->next;
    };
};