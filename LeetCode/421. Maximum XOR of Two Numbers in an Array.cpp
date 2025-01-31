// definition of the trie node
struct Node {
    Node* links[2];
    bool containsBit(int bit) {
        return links[bit];
    }
};

class Solution {
public:
    Node* root = new Node();

    void insertNum(int num) {
        Node* node = root;

        for (int i = 31; i >= 0; i--) {
            int bit = (num >> i) & 1;
            if (!node->containsBit(bit)) {
                node->links[bit] = new Node();
            }
            node = node->links[bit];
        }
    }

    int maxXOR(int num) {
        Node* node = root;
        int maxNum = 0;

        for (int i = 31; i >= 0; i--) {
            int bit = (num >> i) & 1;
            if (node->containsBit(!bit)) {
                maxNum = maxNum | (1 << i);
                node = node->links[!bit];
            } else {
                node = node->links[bit];
            }
        }
        return maxNum;
    }

    int findMaximumXOR(vector<int>& nums) {
        int maximumXOR = 0;

        for (int num : nums) {
            insertNum(num);
        }
        for (int num : nums) {
            maximumXOR = max(maximumXOR, maxXOR(num));
        }
        return maximumXOR;
    }
};
