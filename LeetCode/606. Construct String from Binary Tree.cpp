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
    void result(TreeNode* node, int t, string &res){
        if(node==nullptr){
            return;
        }
        if(t!=0){
            res+="(";
        }
        res+=to_string(node->val);
        if(node->left==nullptr && node->right!=nullptr){
            res+="()";
        }
        result(node->left, t+1, res);
        result(node->right, t+1, res);
        if(t!=0){
            res+=")";
        }
    }

    string tree2str(TreeNode* root) {
        int trav = 0;
        string res = "";
        result(root, trav, res);
        return res;
    }
};
