* Problem : https://leetcode.com/problems/middle-of-the-linked-list/

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
    ListNode* middleNode(ListNode* head) {
        ListNode* heir=head;
        ListNode* tortoise=head;
        
        while(heir!=NULL and heir->next!=NULL){
            heir = heir->next->next;
            tortoise = tortoise->next;
        }
        
        return tortoise;
    }
};