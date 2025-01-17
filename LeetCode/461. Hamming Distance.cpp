class Solution {
public:
    int hammingDistance(int x, int y) {
        bitset<32> x1(x);
        bitset<32> y1(y);
        string xString, yString;
        int hammingDistance = 0;

        xString = x1.to_string();
        yString = y1.to_string();
        for (int i = 0; i < 32; i++) {
            if (x1[i] != y1[i]) {
                hammingDistance++;
            }
        }
        return hammingDistance;
    }
};
