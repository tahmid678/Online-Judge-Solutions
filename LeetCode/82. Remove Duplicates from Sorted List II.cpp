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
    ListNode* deleteDuplicates(ListNode* head) {
        map<int, int> frequency;
        ListNode* node = NULL;

        while (head != NULL) {
            frequency[head->val]++;
            head = head->next;
        }
        for (auto pair : frequency) {
            if (!head && pair.second == 1) {
                head = new ListNode(pair.first);
                node = head;
            } else if (pair.second == 1) {
                node->next = new ListNode(pair.first);
                node = node->next;
            }
        }
        return head;
    }
};
