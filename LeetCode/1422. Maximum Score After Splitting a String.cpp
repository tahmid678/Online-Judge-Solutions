class Solution {
public:
    int maxScore(string s) {
        int ones = 0, zeroes = 0;
        int maximumScore = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1') {
                ones++;
            }
        }

        for (int i = 0; i < s.size() - 1; i++) {
            if (s[i] == '0') {
                zeroes++;
            }
            if (s[i] == '1') {
                ones--;
            }
            if (ones + zeroes > maximumScore) {
                maximumScore = ones + zeroes;
            }
        }

        return maximumScore;
    }
};