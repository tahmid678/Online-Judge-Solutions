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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* node1 = head;
        ListNode* node2 = head;
        ListNode* node3 = head;
        ListNode* last = NULL;
        int i = 0, j = 1;

        while (node1 != NULL) {
            i++;
            last = node1;
            node1 = node1->next;
        }
        if (i == 0 || k % i == 0) {
            return head;
        }
        k %= i;
        while (node3 != NULL) {
            if (j == i - k) {
                head = node3->next;
                node3->next = NULL;
                break;
            }
            node3 = node3->next;
            j++;
        }
        last->next = node2;
        return head;
    }
};
