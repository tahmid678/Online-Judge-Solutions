class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *l3 = NULL;
        ListNode *p, *q;
        int carry = 0, sum = 0;
        while(l1 && l2){
            sum = l1->val + l2->val + carry;
            if(sum>=10){
                sum-=10;
                if(l3==NULL){
                    p = new ListNode(sum);
                    l3 = q = p;
                }else{
                    p = new ListNode(sum);
                    q->next = p;
                    q = p;
                }
                carry = 1;
                sum = 0;
            }else{
                if(l3==NULL){
                    p = new ListNode(sum);
                    l3 = q = p;
                }else{
                    p = new ListNode(sum);
                    q->next = p;
                    q = p;
                }
                carry = 0;
                sum = 0;
            }
            l1 = l1->next;
            l2 = l2->next;
        }
        if(l1==NULL){
            while(l2){
                sum = l2->val + carry;
                if(sum>=10){
                    sum-=10;
                    p = new ListNode(sum);
                    q->next = p;
                    q = p;
                    carry = 1;
                    sum = 0;
                }else{
                    p = new ListNode(sum);
                    q->next = p;
                    q = p;
                    carry = 0;
                    sum = 0;
                }
                l2 = l2->next;
            }
        }else{
            while(l1){
                sum = l1->val + carry;
                if(sum>=10){
                    sum-=10;
                    p = new ListNode(sum);
                    q->next = p;
                    q = p;
                    carry = 1;
                    sum = 0;
                }else{
                    p = new ListNode(sum);
                    q->next = p;
                    q = p;
                    carry = 0;
                    sum = 0;
                }
                l1 = l1->next;
            }
        }

        if(carry){
            p = new ListNode(carry);
            q->next = p;
            q = p;
        }
        
        return l3;
    }
};