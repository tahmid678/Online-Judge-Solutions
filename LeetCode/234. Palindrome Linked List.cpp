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
    bool isPalindrome(ListNode* head) {
        ListNode* reverseHead = nullptr;
        ListNode* node = head;
        bool result = true;

        while (node != nullptr) {
            ListNode* newNode = new ListNode(node->val);
            if (reverseHead == nullptr) {
                reverseHead = newNode;
            } else {
                newNode->next = reverseHead;
                reverseHead = newNode;
            }
            node = node->next;
        }

        while (reverseHead != nullptr && head != nullptr) {
            if (reverseHead->val != head->val) {
                result = false;
                break;
            }
            reverseHead = reverseHead->next;
            head = head->next;
        }

        return result;
    }
};