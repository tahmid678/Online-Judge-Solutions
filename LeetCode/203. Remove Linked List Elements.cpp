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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* newHead = NULL;
        ListNode* prevNode = head;
        ListNode* node = head;

        while (node != NULL) {
            if (!newHead && node->val != val) {
                newHead = node;
                prevNode = node;
                node = node->next;
            } else if (node->val == val) {
                node = node->next;
            } else {
                prevNode->next = node;
                prevNode = node;
                node = node->next;
            }
        }
        if (newHead) {
            prevNode->next = NULL;
        }
        return newHead;
    }
};
