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
        ListNode* node = head;
        int i = 0;
        int j = 0;

        while (node) {
            node = node->next;
            i++;
        }
        while (head) {
            if (j == i / 2) {
                break;
            }
            head = head->next;
            j++;
        }
        return head;
    }
};
