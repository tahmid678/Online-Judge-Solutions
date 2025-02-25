class Solution {
public:
    static bool cmpFn(pair<char, int>& a, pair<char, int>& b) {
        return a.second > b.second;
    }

    string frequencySort(string s) {
        map<char, int> charFreq;
        vector<pair<char, int>> freqVector;

        for (char c : s) {
            charFreq[c]++;
        }
        for (auto pair : charFreq) {
            freqVector.push_back(pair);
        }
        sort(freqVector.begin(), freqVector.end(), cmpFn);
        s.clear();
        for (auto it : freqVector) {
            while (it.second) {
                s += it.first;
                it.second--;
            }
        }
        return s;
    }
};
