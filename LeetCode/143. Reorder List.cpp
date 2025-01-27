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
    void reorderList(ListNode* head) {
        vector<ListNode*> nodes;
        ListNode* node = head;

        while (node) {
            nodes.push_back(node);
            node = node->next;
        }
        int lastNodeIndex = nodes.size() - 1;
        for (int i = 0; i < nodes.size() / 2; i++) {
            nodes[i]->next = nodes[lastNodeIndex];
            nodes[lastNodeIndex]->next = nodes[i + 1];
            nodes[i + 1]->next = NULL;
            lastNodeIndex--;
        }
        head = nodes[0];
    }
};
