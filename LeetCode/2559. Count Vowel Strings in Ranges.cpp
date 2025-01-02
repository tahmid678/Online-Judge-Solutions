class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int> ans;
        vector<int> vowelCount;
        set<char> vowel = {'a', 'e', 'i', 'o', 'u'};
        int totalWords = 0;
        int start, end;

        for (string s : words) {
            start = 0;
            end = s.size() - 1;
            if (vowel.contains(s[start]) && vowel.contains(s[end])) {
                vowelCount.push_back(++totalWords);
            } else {
                vowelCount.push_back(totalWords);
            }
        }
        for (auto v : queries) {
            string left = words[v[0]];
            start = 0;
            end = left.size() - 1;
            if (vowel.contains(left[start]) && vowel.contains(left[end])) {
                ans.push_back(vowelCount[v[1]] - vowelCount[v[0]] + 1);
            } else {
                ans.push_back(vowelCount[v[1]] - vowelCount[v[0]]);
            }
        }
        return ans;
    }
};
