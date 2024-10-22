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
    void levelSum(TreeNode* node, map<long, long>& sum, int i) {
        if (node == NULL) {
            return;
        }
        sum[i] += node->val;
        levelSum(node->left, sum, i + 1);
        levelSum(node->right, sum, i + 1);
    }

    long long kthLargestLevelSum(TreeNode* root, int k) {
        long long result = -1;
        map<long, long> sum;
        vector<pair<long, long>> sumList;
        levelSum(root, sum, 1);

        for (auto pair : sum) {
            sumList.push_back(pair);
        }
        sort(sumList.begin(), sumList.end(),
             [](pair<long, long>& p1, pair<long, long>& p2) {
                 return p1.second > p2.second;
             });

        int i = 1;
        for (auto pair : sumList) {
            if (i == k) {
                result = pair.second;
                break;
            }
            i++;
        }
        return result;
    }
};
