class Solution {
public:
    long long minimumSteps(string s) {
        long long result = 0;
        int postZeros = 0;
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == '0') {
                postZeros++;
            } else {
                result += postZeros;
            }
        }
        return result;
    }
};
