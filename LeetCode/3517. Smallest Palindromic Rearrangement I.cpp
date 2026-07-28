class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int> characterCount(26, 0);
        int left = 0, right = s.size() - 1;

        for (char c : s) {
            characterCount[c - 'a']++;
        }

        for (int i = 0; i < 26; i++) {
            if (characterCount[i] % 2 == 1) {
                s[s.size() / 2] = i + 'a';
                characterCount[i]--;
            }
            while (characterCount[i]) {
                s[left] = i + 'a';
                s[right] = i + 'a';
                left++;
                right--;
                characterCount[i] -= 2;
            }
        }

        return s;
    }
};