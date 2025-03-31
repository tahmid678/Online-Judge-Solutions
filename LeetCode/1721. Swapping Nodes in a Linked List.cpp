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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* node = head;
        ListNode* left = NULL;
        ListNode* right = NULL;
        int count = 0, i = 1;

        while (node) {
            count++;
            node = node->next;
        }
        node = head;
        while (node) {
            if (i == k) {
                left = node;
            }
            if (count - i + 1 == k) {
                right = node;
            }
            i++;
            node = node->next;
        }
        int tempValue = left->val;
        left->val = right->val;
        right->val = tempValue;
        return head;
    }
};
