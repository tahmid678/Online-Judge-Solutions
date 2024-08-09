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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* newHead = NULL;
        ListNode* lastNode;
        long long sum = 0;
        head = head->next;
        while(head!=NULL){
            if(head->val == 0){
                if(newHead == NULL){
                    newHead = lastNode = new ListNode(sum);
                }else{
                    lastNode->next = new ListNode(sum);
                    lastNode = lastNode->next;
                }
                sum = 0;
            }else{
                sum += head->val;
            }
            head = head->next;
        }
        return newHead;
    }
};
