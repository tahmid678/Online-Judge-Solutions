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
    int modifiedList(ListNode* node, int i) {
        if (node->next == NULL) {
            return i;
        }
        int size = modifiedList(node->next, i + 1);
        if (size % 2 == 0 && size / 2 == i + 1) {
            node->next = node->next->next;
        } else if (size % 2 == 1 && size / 2 == i) {
            node->next = node->next->next;
        }
        return size;
    }

    ListNode* deleteMiddle(ListNode* head) {
        if (head->next == NULL) {
            return NULL;
        }
        modifiedList(head, 0);
        return head;
    }
};
