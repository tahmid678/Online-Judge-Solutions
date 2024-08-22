class Solution {
public:
    int myAtoi(string s) {
        stack<int> num;
        int sign = 0;
        int signCount = 1;
        long long result = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ' && num.size() == 0 && signCount <= 1) {
                continue;
            } else if (s[i] >= 48 && s[i] <= 57) {
                num.push(s[i] - 48);
            } else if (s[i] == '-' && num.size() == 0 && signCount <= 1) {
                sign = 1;
                signCount++;
            } else if (s[i] == '+' && num.size() == 0 && signCount <= 1) {
                sign = 0;
                signCount++;
            } else {
                break;
            }
        }

        int i = 0;
        while (num.size()) {
            if (i > 18 && num.top() != 0) {
                return sign ? INT_MIN : INT_MAX;
            }
            if (sign) {
                result -= pow(10, i) * num.top();
                num.pop();
                if (result <= INT_MIN) {
                    return INT_MIN;
                }
            } else {
                result += pow(10, i) * num.top();
                num.pop();
                if (result >= INT_MAX) {
                    return INT_MAX;
                }
            }
            i++;
        }
        return result;
    }
};
