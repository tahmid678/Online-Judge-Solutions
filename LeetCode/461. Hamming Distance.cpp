class Solution {
public:
    int hammingDistance(int x, int y) {
        bitset<32> x1(x);
        bitset<32> y1(y);
        int hammingDistance = 0;

        for (int i = 0; i < 32; i++) {
            if (x1[i] != y1[i]) {
                hammingDistance++;
            }
        }
        return hammingDistance;
    }
};
