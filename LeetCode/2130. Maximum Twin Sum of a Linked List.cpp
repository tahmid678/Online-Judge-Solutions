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
    int pairSum(ListNode* head) {
        deque<int> list;
        int maxSum = 0;

        while (head) {
            list.push_back(head->val);
            head = head->next;
        }
        while (!list.empty()) {
            maxSum = max(maxSum, list.front() + list.back());
            list.pop_front();
            list.pop_back();
        }
        return maxSum;
    }
};
