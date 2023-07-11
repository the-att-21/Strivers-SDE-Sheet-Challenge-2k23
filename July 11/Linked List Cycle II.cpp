* Problem : https://leetcode.com/problems/linked-list-cycle-ii/description/

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
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL or head -> next == NULL) return NULL;

        ListNode* fast = head;
        ListNode* slow = head;

        while(fast and fast -> next){
            fast = fast -> next -> next;
            slow = slow -> next;

            //If slow and fast meet == Cycle present
            //Therefore reset the slow to head and againn trace till they meet
            //The point they meet is the point where the cycle starts
            if(slow == fast){
                slow = head;
                while(slow != fast){
                    slow = slow -> next;
                    fast = fast -> next;
                }

                return slow;
            }
        }

        return NULL;
    }
};