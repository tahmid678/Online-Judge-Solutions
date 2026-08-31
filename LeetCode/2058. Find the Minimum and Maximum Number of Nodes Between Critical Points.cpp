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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> result = {-1, -1};
        int firstCritical = 0;
        int currentCritical = 0;
        int previousCritical = 0;
        int minDistance = INT_MAX;
        int i = 2;

        ListNode* prev = head;
        ListNode* current = head->next;
        ListNode* next = current->next;

        while (next) {
            if (current->val > prev->val && current->val > next->val) {
                if (!firstCritical) {
                    firstCritical = i;
                    previousCritical = i;

                } else {
                    currentCritical = i;
                    minDistance =
                        min(minDistance, currentCritical - previousCritical);
                    previousCritical = currentCritical;
                }
            } else if (current->val < prev->val && current->val < next->val) {
                if (!firstCritical) {
                    firstCritical = i;
                    previousCritical = i;
                } else {
                    currentCritical = i;
                    minDistance =
                        min(minDistance, currentCritical - previousCritical);
                    previousCritical = currentCritical;
                }
            }
            i++;
            prev = current;
            current = next;
            next = next->next;
        }

        if (currentCritical) {
            result[0] = minDistance;
            result[1] = currentCritical - firstCritical;
        }

        return result;
    }
};