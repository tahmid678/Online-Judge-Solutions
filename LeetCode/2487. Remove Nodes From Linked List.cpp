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
    ListNode* remove(ListNode* head){
        if(head->next==NULL){
            return head;
        }
        int currentVal = head->val;
        ListNode* node = remove(head->next);
        if(node->val > currentVal){
            head = node;
        }else{
            head->next = node;
        }
        return head;
    }

    ListNode* removeNodes(ListNode* head) {
        return remove(head);
    }
};
