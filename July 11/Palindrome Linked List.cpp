* Problem : https://leetcode.com/problems/palindrome-linked-list/description/

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
    bool isPalindrome(ListNode* head) {
        ListNode *last = NULL;
        ListNode *ptr = head;

        while(ptr != NULL){
            ListNode *temp = new ListNode(ptr -> val);
            temp -> next = last;
            last = temp;
            ptr = ptr->next;
        }

        while(head != NULL and last != NULL){
            cout<< head -> val << "\n" << last -> val;
            if(head -> val != last -> val) return 0;

            head = head -> next;
            last = last -> next;
        }

        return 1;
    }
};