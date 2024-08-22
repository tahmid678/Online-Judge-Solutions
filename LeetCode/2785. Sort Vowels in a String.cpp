class Solution {
public:
    string sortVowels(string s) {
        map<char, int> vowelCount;

        for (char c : s) {
            if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' ||
                c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                vowelCount[c]++;
            }
        }
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' ||
                s[i] == 'U' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||
                s[i] == 'o' || s[i] == 'u') {
                char smallest = vowelCount.begin()->first;
                swap(s[i], smallest);
                if (--vowelCount.begin()->second == 0) {
                    vowelCount.erase(vowelCount.begin());
                }
            }
        }
        return s;
    }
};
