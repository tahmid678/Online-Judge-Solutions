/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void swapNodes(TreeNode* node) {
        if (!node) {
            return;
        }

        TreeNode* tempNode = node->left;
        node->left = node->right;
        node->right = tempNode;
        swapNodes(node->left);
        swapNodes(node->right);
    }

    TreeNode* invertTree(TreeNode* root) {
        swapNodes(root);

        return root;
    }
};