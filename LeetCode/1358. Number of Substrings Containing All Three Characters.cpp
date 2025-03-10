class Solution {
public:
    int numberOfSubstrings(string s) {
        map<char, int> charFreq;
        int countSubstring = 0;
        int l = 0, r = 0;

        while (r < s.size()) {
            charFreq[s[r]]++;
            while (charFreq.size() == 3) {
                countSubstring += s.size() - r;
                charFreq[s[l]]--;
                if (!charFreq[s[l]]) {
                    charFreq.erase(s[l]);
                }
                l++;
            }
            r++;
        }
        return countSubstring;
    }
};
