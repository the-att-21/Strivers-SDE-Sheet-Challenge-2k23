* Problem : https://leetcode.com/problems/reverse-nodes-in-k-group/description/

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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == NULL) return head;
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* nextnode;
        int cnt = 0;


        ListNode* ptr = head;
        for(int i = 0; i < k; i++) {
            if(ptr == NULL) return head;
            ptr = ptr -> next;
        }
        
        while(curr != NULL and cnt < k){
            nextnode = curr -> next;
            curr -> next = prev;
            
            prev = curr;
            curr = nextnode;

            cnt++;
        }

        if(nextnode != NULL) head -> next = reverseKGroup(nextnode, k);
        
        return prev;
    }
};
