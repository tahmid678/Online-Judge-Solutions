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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> first;
        stack<int> second;
        int carry = 0;
        int a = 0, b = 0, sum = 0;

        while (l1 || l2) {
            if (l1) {
                first.push(l1->val);
                l1 = l1->next;
            }
            if (l2) {
                second.push(l2->val);
                l2 = l2->next;
            }
        }

        while (!first.empty() || !second.empty()) {
            if (!first.empty()) {
                a = first.top();
                first.pop();
            }
            if (!second.empty()) {
                b = second.top();
                second.pop();
            }
            sum = a + b + carry;
            if (!l1) {
                l1 = new ListNode(sum % 10);
            } else {
                l2 = new ListNode(sum % 10);
                l2->next = l1;
                l1 = l2;
            }
            carry = sum / 10;
            a = b = sum = 0;
        }
        if (carry) {
            l2 = new ListNode(carry);
            l2->next = l1;
            l1 = l2;
        }
        return l1;
    }
};
