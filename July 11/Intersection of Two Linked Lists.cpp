* Problem : https://leetcode.com/problems/intersection-of-two-linked-lists/

* Solution : 

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int length(ListNode *head){
        int l=0;
        while(head!=NULL){
            head=head->next;
            l++;
        }
        return l;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int l1=length(headA);
        int l2=length(headB);
        if(l1==1 and l2==1){
            if(headA->val==headB->val) return headA;
        }
        int diff;
        
        ListNode* t1;
        ListNode* t2;
        
        if(l1>l2){
            diff=l1-l2;
            t1=headA;
            t2=headB;
        }
        else
        {
            diff=l2-l1;
            t1=headB;
            t2=headA;
        }
        
        while(diff--){
            t1=t1->next;
            if(t1==NULL){
                return NULL;
            }
        }
            
        while(t1!=NULL and t2!=NULL){
            if(t1==t2)
                return t1;
            
            t1=t1->next;
            t2=t2->next;
        }
        
        return NULL;
    }
};