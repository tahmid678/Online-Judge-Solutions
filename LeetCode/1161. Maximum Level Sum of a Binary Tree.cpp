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
    void levelSum(TreeNode* node, map<int, long>& sum, int i) {
        if (node == NULL) {
            return;
        }
        sum[i] += node->val;
        levelSum(node->left, sum, i + 1);
        levelSum(node->right, sum, i + 1);
    }

    int maxLevelSum(TreeNode* root) {
        long maxSum = INT_MIN;
        map<int, long> sum;
        int level;

        levelSum(root, sum, 1);
        for (auto pair : sum) {
            if (pair.second > maxSum) {
                maxSum = pair.second;
                level = pair.first;
            }
        }
        return level;
    }
};
