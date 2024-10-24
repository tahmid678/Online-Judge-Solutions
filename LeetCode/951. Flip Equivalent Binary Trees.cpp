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
    bool checkEquivalent(TreeNode* node1, TreeNode* node2) {
        if (node1 == node2) {
            return true;
        } else if (node1 == NULL & node2 != NULL) {
            return false;
        } else if (node1 != NULL && node2 == NULL) {
            return false;
        } else if (node1->val != node2->val) {
            return false;
        } else {
            bool withoutSwap = checkEquivalent(node1->left, node2->left) &
                               checkEquivalent(node1->right, node2->right);

            bool withSwap = checkEquivalent(node1->left, node2->right) &
                            checkEquivalent(node1->right, node2->left);

            return withoutSwap || withSwap;
        }
    }

    bool flipEquiv(TreeNode* root1, TreeNode* root2) {
        return checkEquivalent(root1, root2);
    }
};
