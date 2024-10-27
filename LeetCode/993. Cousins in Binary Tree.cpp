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
    void findParent(TreeNode* node, int v, set<TreeNode*>& p, TreeNode* prev) {
        if (node == NULL) {
            return;
        } else if (node->val == v) {
            p.insert(prev);
            return;
        }
        findParent(node->left, v, p, node);
        findParent(node->right, v, p, node);
    }

    void findDepth(TreeNode* node, int v, set<int>& depth, int k) {
        if (node == NULL) {
            return;
        } else if (node->val == v) {
            depth.insert(k);
            return;
        }
        findDepth(node->left, v, depth, k + 1);
        findDepth(node->right, v, depth, k + 1);
    }

    bool isCousins(TreeNode* root, int x, int y) {
        set<int> depth;
        set<TreeNode*> parents;
        findParent(root, x, parents, NULL);
        findParent(root, y, parents, NULL);
        findDepth(root, x, depth, 0);
        findDepth(root, y, depth, 0);
        if (parents.size() == 2 && depth.size() == 1) {
            return true;
        }
        return false;
    }
};
