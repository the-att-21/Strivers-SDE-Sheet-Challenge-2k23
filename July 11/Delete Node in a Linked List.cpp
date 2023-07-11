* Problem : https://leetcode.com/problems/delete-node-in-a-linked-list/

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
    void deleteNode(ListNode* node) {
        // Basically here the val of node is modified to node->next's val.
        node->val=node->next->val;
        //Then the node->next is pointed to next ka next...ommiting the node from where the val was copied! 
        node->next=node->next->next;
    }
};