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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        int i = 0;
        ListNode* l = NULL;
        ListNode* r = NULL;
        ListNode* l1 = list1;
        ListNode* l2 = list2;

        while (l1) {
            if (i + 1 == a) {
                l = l1;
            } else if (i - 1 == b) {
                r = l1;
            }
            l1 = l1->next;
            i++;
            if (l && r) {
                break;
            }
        }
        while (l2->next != NULL) {
            l2 = l2->next;
        }
        l->next = list2;
        l2->next = r;
        return list1;
    }
};
