class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> charFreq;
        int maxLength = 0;
        int charCount = 0;
        int l, r;
        l = r = 0;

        while (r < s.size()) {
            charFreq[s[r]]++;
            charCount += 1;
            if (charFreq.size() == charCount) {
                maxLength = max(maxLength, r - l + 1);
            } else {
                charFreq[s[l]]--;
                charCount -= 1;
                if (!charFreq[s[l]])
                    charFreq.erase(s[l]);
                l += 1;
            }
            r += 1;
        }
        return maxLength;
    }
};
