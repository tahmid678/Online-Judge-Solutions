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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head = NULL;
        ListNode* temp = NULL;

        while (list1 != NULL && list2 != NULL) {
            if (head == NULL) {
                if (list1->val > list2->val) {
                    temp = new ListNode(list2->val);
                    list2 = list2->next;
                } else {
                    temp = new ListNode(list1->val);
                    list1 = list1->next;
                }
                head = temp;
            } else {
                if (list1->val > list2->val) {
                    temp->next = new ListNode(list2->val);
                    list2 = list2->next;
                } else {
                    temp->next = new ListNode(list1->val);
                    list1 = list1->next;
                }
                temp = temp->next;
            }
        }

        while (list1 != NULL) {
            if (head == NULL) {
                temp = new ListNode(list1->val);
                head = temp;
            } else {
                temp->next = new ListNode(list1->val);
                temp = temp->next;
            }
            list1 = list1->next;
        }
        while (list2 != NULL) {
            if (head == NULL) {
                temp = new ListNode(list2->val);
                head = temp;
            } else {
                temp->next = new ListNode(list2->val);
                temp = temp->next;
            }
            list2 = list2->next;
        }
        return head;
    }
};
