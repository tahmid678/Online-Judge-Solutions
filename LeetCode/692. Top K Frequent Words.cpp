class Solution {
public:
    static bool cmpFn(pair<string, int>& a, pair<string, int>& b) {
        if (a.second == b.second) {
            return a.first < b.first;
        }
        return a.second > b.second;
    }

    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string, int> wordFreq;
        vector<pair<string, int>> freqPairs;
        vector<string> result;

        for (string s : words) {
            wordFreq[s]++;
        }
        for (auto pair : wordFreq) {
            freqPairs.push_back(pair);
        }
        sort(freqPairs.begin(), freqPairs.end(), cmpFn);
        for (int i = 0; i < k; i++) {
            result.push_back(freqPairs[i].first);
        }
        return result;
    }
};
