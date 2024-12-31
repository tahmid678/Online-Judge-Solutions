class Solution {
public:
    int hammingWeight(int n) {
        bitset<32> result(n);
        return result.count();
    }
};
