class Solution {
public:
    string reverseAndInverse(string s) {
        for (int i = 0; i < s.size(); i++) {
            s[i] = s[i] == '0' ? '1' : '0';
        }
        reverse(s.begin(), s.end());
        return s;
    }

    char findKthBit(int n, int k) {
        string s = "0";

        for (int i = 1; i < n; i++) {
            s = s + "1" + reverseAndInverse(s);
        }
        return s[k - 1];
    }
};
