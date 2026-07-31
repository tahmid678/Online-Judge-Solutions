class Solution {
public:
    int minimumPushes(string word) {
        vector<int> letterFreqs(26, 0);
        int pushCount = 0;
        int push = 1;

        for (char c : word) {
            letterFreqs[c - 'a']++;
        }

        sort(letterFreqs.begin(), letterFreqs.end(), greater<>());
        for (int i = 0; i < 26; i++) {
            pushCount += letterFreqs[i] * push;
            if ((i + 1) % 8 == 0) {
                push++;
            }
        }

        return pushCount;
    }
};