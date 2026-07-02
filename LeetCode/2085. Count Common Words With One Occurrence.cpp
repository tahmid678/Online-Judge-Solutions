class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        map<string, int> wordsCount1;
        map<string, int> wordsCount2;
        int commonWords = 0;

        for (string word : words1) {
            wordsCount1[word]++;
        }
        for (string word : words2) {
            wordsCount2[word]++;
        }
        for (string word : words1) {
            if (wordsCount1[word] == 1 && wordsCount2[word] == 1) {
                commonWords++;
            }
        }
        return commonWords;
    }
};