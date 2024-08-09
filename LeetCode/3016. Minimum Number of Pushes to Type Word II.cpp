class Solution {
public:
    int minimumPushes(string word) {
        map<char, int> charFrequency;
        vector<int> frequency;
        long long minPush = 0;

        for (int i = 0; i < word.size(); i++) {
            charFrequency[word[i]]++;
        }
        for (auto x : charFrequency) {
            frequency.push_back(x.second);
        }

        sort(frequency.begin(), frequency.end(), greater<int>());
        for (int i = 0; i < frequency.size(); i++) {
            if (i <= 7) {
                minPush += frequency[i] * 1;
            } else if (i <= 15) {
                minPush += frequency[i] * 2;
            } else if (i <= 23) {
                minPush += frequency[i] * 3;
            } else {
                minPush += frequency[i] * 4;
            }
        }
        return minPush;
    }
};
