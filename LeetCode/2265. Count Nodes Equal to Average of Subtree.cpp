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
private:
    pair<int, int> countSubTree(TreeNode* node, int* countNode) {
        if (!node) {
            return {0, 0};
        }

        pair<int, int> leftSubTree = countSubTree(node->left, countNode);
        pair<int, int> rightSubTree = countSubTree(node->right, countNode);
        int sum = leftSubTree.first + rightSubTree.first + node->val;
        int nodeNumber = leftSubTree.second + rightSubTree.second + 1;

        if (sum / nodeNumber == node->val) {
            (*countNode)++;
        }

        return {sum, nodeNumber};
    }

public:
    int averageOfSubtree(TreeNode* root) {
        int countNode = 0;
        countSubTree(root, &countNode);

        return countNode;
    }
};