class Solution {
public:
    int minimumLength(string s) {
        vector<int> freq(26, 0);
        int result = 0;

        for (char c : s) {
            freq[c - 'a']++;
        }
        for (int i = 0; i < freq.size(); i++) {
            if (freq[i] < 3) {
                result += freq[i];
            } else if (freq[i] % 2 == 0) {
                result += 2;
            } else {
                result += 1;
            }
        }
        return result;
    }
};
