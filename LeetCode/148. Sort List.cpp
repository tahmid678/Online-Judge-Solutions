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
    ListNode* sortList(ListNode* head) {
        priority_queue<int, vector<int>, greater<int>> sortedList;
        ListNode* node = NULL;

        while (head != NULL) {
            sortedList.push(head->val);
            head = head->next;
        }
        while (!sortedList.empty()) {
            if (!head) {
                head = new ListNode(sortedList.top());
                node = head;
                sortedList.pop();
            } else {
                node->next = new ListNode(sortedList.top());
                node = node->next;
                sortedList.pop();
            }
        }
        return head;
    }
};
