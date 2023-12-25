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
    ListNode* listReverse(ListNode* node, ListNode*head) {
        if (head == nullptr || head->next == nullptr) {
            node = head;
            return node;
        }
        node = listReverse(node, head->next);
        head->next->next = head;
        head->next = nullptr;
        return node;
    }

    ListNode* reverseList(ListNode* head) {
        ListNode* node = nullptr;
        return listReverse(node, head);
    }
};