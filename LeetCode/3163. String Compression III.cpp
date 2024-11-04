class Solution {
public:
    string compressedString(string word) {
        map<char, int> charFreq;
        string comp = "";
        int freq = 1;
        int i = 0;

        for (; i < word.size() - 1; i++) {
            if (word[i] == word[i + 1]) {
                freq++;
                if (freq == 9) {
                    comp += to_string(9) + word[i];
                    freq -= 9;
                }
            } else {
                if (freq) {
                    comp += to_string(freq) + word[i];
                }
                freq = 1;
            }
        }
        if (freq) {
            comp += to_string(freq) + word[i];
        }
        return comp;
    }
};
