/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void postOrder(Node* node, vector<int>& result) {
        if (node->children.size() == 0) {
            return;
        }
        for (auto child : node->children) {
            postOrder(child, result);
            result.push_back(child->val);
        }
    }

    vector<int> postorder(Node* root) {
        vector<int> result;
        if (root != NULL) {
            postOrder(root, result);
            result.push_back(root->val);
        }
        return result;
    }
};
