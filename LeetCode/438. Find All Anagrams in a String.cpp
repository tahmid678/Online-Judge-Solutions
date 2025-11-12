class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> indices;
        map<char, int> charFreqs1;
        map<char, int> charFreqs2;
        bool index = true;

        for (int i = 0; i < p.size(); i++) {
            charFreqs1[s[i]]++;
            charFreqs2[p[i]]++;
        }
        for (pair<char, int> p : charFreqs1) {
            if (p.second != charFreqs2[p.first]) {
                index = false;
                break;
            }
        }
        if (index)
            indices.push_back(0);

        int i = 0, j = p.size();
        while (j < s.size()) {
            index = true;
            charFreqs1[s[i]]--;
            charFreqs1[s[j]]++;
            i++, j++;
            for (pair<char, int> p : charFreqs1) {
                if (p.second != charFreqs2[p.first]) {
                    index = false;
                    break;
                }
            }
            if (index)
                indices.push_back(i);
        }
        return indices;
    }
};
