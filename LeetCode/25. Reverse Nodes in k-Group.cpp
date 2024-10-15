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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* modifiedList = NULL;
        ListNode* node = NULL;
        stack<int> group;
        vector<int> v;
        int i;

        while (head != NULL) {
            i = 0;
            while (i < k && head != NULL) {
                group.push(head->val);
                head = head->next;
                i++;
            }
            if (group.size() < k) {
                while (!group.empty()) {
                    v.push_back(group.top());
                    group.pop();
                }
                i = v.size() - 1;
                while (i >= 0) {
                    node->next = new ListNode(v[i]);
                    node = node->next;
                    i--;
                }
                v.clear();
            }
            while (!group.empty()) {
                if (!modifiedList) {
                    modifiedList = new ListNode(group.top());
                    node = modifiedList;
                    group.pop();
                } else {
                    node->next = new ListNode(group.top());
                    node = node->next;
                    group.pop();
                }
            }
        }
        return modifiedList;
    }
};
