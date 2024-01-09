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
    void checkSimilarity(vector<int> &tree, TreeNode* root) {
        if (root == nullptr) return;
        else if (root->left == nullptr && root->right == nullptr) {
            tree.push_back(root->val);
            return;
        }
        checkSimilarity(tree, root->left);
        checkSimilarity(tree, root->right);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> tree1, tree2;
        checkSimilarity(tree1, root1);
        checkSimilarity(tree2, root2);

        if (tree1 == tree2) return true;
        else return false;
    }
};