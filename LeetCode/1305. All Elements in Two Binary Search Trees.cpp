/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    void elementList(TreeNode* node, vector<int>& list) {
        if (node == NULL) {
            return;
        }
        elementList(node->left, list);
        list.push_back(node->val);
        elementList(node->right, list);
    }

    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> list1;
        vector<int> list2;
        vector<int> result;
        int i, j;

        elementList(root1, list1);
        elementList(root2, list2);
        for (i = 0, j = 0; i < list1.size() && j < list2.size();) {
            if (list1[i] <= list2[j]) {
                result.push_back(list1[i]);
                i++;
            } else {
                result.push_back(list2[j]);
                j++;
            }
        }
        while (i < list1.size()) {
            result.push_back(list1[i]);
            i++;
        }
        while (j < list2.size()) {
            result.push_back(list2[j]);
            j++;
        }
        return result;
    }
};
