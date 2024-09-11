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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* node = head;
        ListNode* nextNode = NULL;

        while (node->next != NULL) {
            nextNode = node->next;
            int gcdValue = gcd(node->val, nextNode->val);
            ListNode* gcdNode = new ListNode(gcdValue);
            node->next = gcdNode;
            gcdNode->next = nextNode;
            node = nextNode;
        }
        return head;
    }
};
