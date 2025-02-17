/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        map<ListNode*, int> nodeFreq;
        ListNode* node1 = headA;
        ListNode* node2 = headB;
        ListNode* intersection;

        while (node1 || node2) {
            if (node1) {
                if (nodeFreq[node1] == 1) {
                    intersection = node1;
                    break;
                }
                nodeFreq[node1]++;
                node1 = node1->next;
            }
            if (node2) {
                if (nodeFreq[node2] == 1) {
                    intersection = node2;
                    break;
                }
                nodeFreq[node2]++;
                node2 = node2->next;
            }
        }
        return intersection;
    }
};
