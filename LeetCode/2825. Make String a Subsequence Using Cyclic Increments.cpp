class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int i = 0, j = 0;
        for (; i < str1.size() && j < str2.size(); i++) {
            if (str1[i] == str2[j]) {
                j++;
                continue;
            }
            if ((str2[j] - 97) % 26 == (str1[i] - 96) % 26) {
                j++;
            }
        }
        if (j == str2.size()) {
            return true;
        }
        return false;
    }
};
