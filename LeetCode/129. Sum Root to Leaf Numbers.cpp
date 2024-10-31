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
    void calculateSum(TreeNode* node, string num, int* sum) {
        if (node == NULL) {
            return;
        } else if (node->left == NULL && node->right == NULL) {
            num += to_string(node->val);
            *sum += stoi(num);
            return;
        }
        calculateSum(node->left, num + to_string(node->val), sum);
        calculateSum(node->right, num + to_string(node->val), sum);
    }

    int sumNumbers(TreeNode* root) {
        string num = "";
        int result = 0;
        calculateSum(root, num, &result);
        return result;
    }
};
