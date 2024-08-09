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
    void preOrder(vector<int>& res, TreeNode* root){
        if(root==NULL){
            return;
        }
        res.push_back(root->val);
        preOrder(res, root->left);
        preOrder(res, root->right);
    }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        preOrder(res, root);
        return res;
    }
};
