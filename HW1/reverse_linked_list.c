/**test case1:
 * Input: head = [1,2,3,4,5]
 * Output: [5,4,3,2,1]
 *
 * test case2:
 * Input: head = [1,2]
 * Output: [2,1]
 *
 * /
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* curr = head;
    struct ListNode* next = NULL;
    struct ListNode* prev = NULL;

    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}