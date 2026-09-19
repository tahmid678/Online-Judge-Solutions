class Solution {
public:
    int maxNumberOfBalloons(string text) {
        string target = "balloon";
        unordered_map<char, int> charFreqs;
        int result = 0;

        for (char c : text) {
            charFreqs[c]++;
        }

        while (true) {
            for (char c : target) {
                if (!charFreqs[c]) {
                    return result;
                }
                charFreqs[c]--;
            }
            result++;
        }

        return result;
    }
};