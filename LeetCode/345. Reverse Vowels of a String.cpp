class Solution {
public:
    string reverseVowels(string s) {
        vector<int> indices;
        set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

        for (int i = 0; i < s.size(); i++) {
            if (vowels.count(s[i])) {
                indices.push_back(i);
            }
        }
        for (int i = 0, j = indices.size() - 1; i < j; i++, j--) {
            swap(s[indices[i]], s[indices[j]]);
        }
        return s;
    }
};
