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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        set<int> s;
        for (auto num : nums) {
            s.insert(num);
        }

        ListNode* node = head;
        ListNode* prevNode = NULL;
        bool headSet = true;
        while (node != NULL) {
            if (s.count(node->val)) {
                node = node->next;
            } else if (headSet) {
                head = node;
                prevNode = node;
                node = node->next;
                headSet = false;
            } else {
                prevNode->next = node;
                prevNode = node;
                node = node->next;
            }
        }
        prevNode->next = NULL;
        return head;
    }
};
