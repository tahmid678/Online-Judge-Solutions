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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* evenHead = NULL;
        ListNode* lastEven = NULL;
        ListNode* lastOdd = NULL;
        ListNode* node = head;
        int i = 1;

        while (node) {
            if (i % 2) {
                if (!lastOdd) {
                    lastOdd = node;
                } else {
                    lastOdd->next = node;
                    lastOdd = node;
                }
            } else {
                if (!lastEven) {
                    evenHead = lastEven = node;
                } else {
                    lastEven->next = node;
                    lastEven = node;
                }
            }
            node = node->next;
            i++;
        }
        if (lastEven) {
            lastEven->next = NULL;
        }
        if (lastOdd) {
            lastOdd->next = evenHead;
        }
        return head;
    }
};
