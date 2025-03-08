class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int result = 0;
        int countWhiteBlocks = 0;
        int l = 0, r = k;

        for (int i = 0; i < k; i++) {
            if (blocks[i] == 'W') {
                result++;
                countWhiteBlocks++;
            }
        }

        while (r < blocks.size()) {
            if (blocks[l] == 'W') {
                countWhiteBlocks--;
            }
            if (blocks[r] == 'W') {
                countWhiteBlocks++;
            }
            result = min(result, countWhiteBlocks);
            l++;
            r++;
        }
        return result;
    }
};
