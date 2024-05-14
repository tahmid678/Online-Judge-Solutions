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
    int carryOver(ListNode* head){
        if(head == NULL){
            return 0;
        }
        int carry = carryOver(head->next);
        int doubleValue = head->val * 2 + carry;
        if(doubleValue > 9){
            head->val = doubleValue-10;
            carry = 1;
        }else{
            head->val = doubleValue;
            carry = 0;
        }
        return carry;
    }

    ListNode* doubleIt(ListNode* head) {
        int carry = carryOver(head);
        if(carry > 0){
            ListNode* newHead = new ListNode(carry, head);
            return newHead;
        }
        return head;
    }
};
