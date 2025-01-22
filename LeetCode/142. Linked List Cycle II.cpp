/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* detectCycle(ListNode* head) {
        map<ListNode*, int> isCycle;

        while (head) {
            if (isCycle[head]) {
                return head;
            }
            isCycle[head]++;
            head = head->next;
        }
        return NULL;
    }
};
