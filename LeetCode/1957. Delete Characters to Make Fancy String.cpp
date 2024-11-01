class Solution {
public:
    string makeFancyString(string s) {
        char prev1, prev2;
        string result = "";
        if (s.size() < 3) {
            return s;
        }
        prev2 = s[0];
        prev1 = s[1];
        int i = 2;
        while (i < s.size()) {
            if (s[i] == prev1 && s[i] == prev2) {
                i++;
                continue;
            }
            result += prev2;
            prev2 = prev1;
            prev1 = s[i];
            i++;
        }
        result += prev2;
        result += prev1;
        return result;
    };
};
