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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* rightMost = NULL;
        ListNode* leftMost = NULL;
        ListNode* aux = NULL;
        ListNode* prevNode = NULL;
        ListNode* node = head;
        int i = 1;

        if (left == right) {
            return head;
        }

        while (node) {
            if (i < left) {
                prevNode = node;
            }
            if (i == left) {
                rightMost = leftMost = aux = new ListNode(node->val);
            } else if (i == right) {
                aux = new ListNode(node->val);
                rightMost->next = node->next;
                aux->next = leftMost;
                leftMost = aux;
                break;
            } else if (i > left && i < right) {
                aux = new ListNode(node->val);
                aux->next = leftMost;
                leftMost = aux;
            }
            node = node->next;
            i++;
        }
        if (!prevNode) {
            head = leftMost;
        } else {
            prevNode->next = leftMost;
        }
        return head;
    }
};
