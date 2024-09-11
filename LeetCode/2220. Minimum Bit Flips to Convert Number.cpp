class Solution {
public:
    int minBitFlips(int start, int goal) {
        int minFlips = 0;
        string startBits = bitset<32>(start).to_string();
        string goalBits = bitset<32>(goal).to_string();

        for (int i = 0; i < 32; i++) {
            if (startBits[i] != goalBits[i]) {
                minFlips++;
            }
        }
        return minFlips;
    }
};
