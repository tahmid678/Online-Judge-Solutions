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
    ListNode* swapPairs(ListNode* head) {
        bool headSet = false;
        ListNode* node = head;
        ListNode *link, *t1, *t2;

        while (node != NULL && node->next != NULL) {
            if (!headSet) {
                t1 = node;
                t2 = node->next;
                t1->next = t2->next;
                t2->next = t1;
                head = t2;
                link = t1;
                node = t1->next;
                headSet = true;
            } else {
                t1 = node;
                t2 = node->next;
                t1->next = t2->next;
                t2->next = t1;
                link->next = t2;
                link = t1;
                node = t1->next;
            }
        }
        return head;
    }
};
