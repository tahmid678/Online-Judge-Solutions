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
    ListNode* partition(ListNode* head, int x) {
        queue<int> lessX;
        queue<int> moreOrEqualX;
        ListNode* node = NULL;

        if(!head){
            return head;
        }

        while (head) {
            if (head->val < x) {
                lessX.push(head->val);
            } else {
                moreOrEqualX.push(head->val);
            }
            head = head->next;
        }

        while (!lessX.empty()) {
            if (!head) {
                head = new ListNode(lessX.front());
                node = head;
            } else {
                node->next = new ListNode(lessX.front());
                node = node->next;
            }
            lessX.pop();
        }

        while (!moreOrEqualX.empty()) {
            if (!head) {
                head = new ListNode(moreOrEqualX.front());
                node = head;
            } else {
                node->next = new ListNode(moreOrEqualX.front());
                node = node->next;
            }
            moreOrEqualX.pop();
        }
        node->next = NULL;
        return head;
    }
};
