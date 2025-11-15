class Solution {
public:
    bool halvesAreAlike(string s) {
        int vowelCount = 0;
        set<int> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

        for (int i = 0; i < s.size(); i++) {
            if (vowels.count(s[i]) && i < s.size() / 2) {
                vowelCount++;
            } else if (vowels.count(s[i])) {
                vowelCount--;
            }
        }
        return !vowelCount;
    }
};
