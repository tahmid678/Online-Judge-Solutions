class Solution {
public:
    string clearDigits(string s) {
        stack<char> stk;

        for (char c : s) {
            if (c >= 97 && c <= 122) {
                stk.push(c);
            } else if (!stk.empty()) {
                stk.pop();
            }
        }

        s.clear();
        while (!stk.empty()) {
            s += stk.top();
            stk.pop();
        }

        for (int i = 0, j = s.size() - 1; i < j; i++, j--) {
            swap(s[i], s[j]);
        }
        return s;
    }
};
