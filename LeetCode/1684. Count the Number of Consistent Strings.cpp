class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        bool consistent = true;
        int result = 0;

        for (int i = 0; i < words.size(); i++) {
            consistent = true;
            for (auto b : words[i]) {
                if (allowed.find(b) != -1) {
                    continue;
                } else {
                    consistent = false;
                    break;
                }
            }
            if (consistent) {
                result++;
            }
        }
        return result;
    }
};
