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
    int remove(ListNode* prev, ListNode* current, int n) {
        if (current->next == NULL) {
            return 1;
        }
        prev = current;
        current = current->next;
        int i = remove(prev, current, n);
        if (i == n) {
            prev->next = current->next;
        }
        return i + 1;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int i = remove(head, head, n);
        if (i == 1) {
            head = NULL;
        } else if (i == n) {
            head = head->next;
        }
        return head;
    }
};
