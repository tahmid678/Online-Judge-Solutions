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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* modifiedList = NULL;
        ListNode* node = NULL;
        priority_queue<int, vector<int>, greater<int>> sortedList;

        for (ListNode* head : lists) {
            while (head != NULL) {
                sortedList.push(head->val);
                head = head->next;
            }
        }
        while (!sortedList.empty()) {
            if (!modifiedList) {
                modifiedList = new ListNode(sortedList.top());
                node = modifiedList;
                sortedList.pop();
            } else {
                node->next = new ListNode(sortedList.top());
                node = node->next;
                sortedList.pop();
            }
        }
        return modifiedList;
    }
};
