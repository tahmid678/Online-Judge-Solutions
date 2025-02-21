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
    int getDecimalValue(ListNode* head) {
        stack<int> bits;
        int decimal = 0, i = 0;

        while (head) {
            bits.push(head->val);
            head = head->next;
        }

        while (!bits.empty()) {
            decimal += bits.top() * pow(2, i);
            bits.pop();
            i++;
        }
        return decimal;
    }
};
