* Problem : https://leetcode.com/problems/reverse-linked-list/description/

* Solution : 

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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL or head->next==NULL) return head;
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* nextnode;
        
        while(curr!=NULL){
            nextnode=curr->next;
            
            curr->next=prev;
            
            prev=curr;
            curr=nextnode;
        }
        return prev;
    }
};