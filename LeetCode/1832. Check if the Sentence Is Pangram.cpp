class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char, int> charFreqs;

        for (char c : sentence) {
            charFreqs[c]++;
        }
        return charFreqs.size() == 26 ? true : false;
    }
};
