class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;

        reverse(digits.begin(), digits.end());
        for (int i = 0; i < digits.size(); i++) {
            carry += digits[i];
            if (carry >= 10) {
                digits[i] = carry % 10;
                carry /= 10;
            } else {
                digits[i] = carry;
                carry = 0;
            }
        }
        if (carry) {
            digits.push_back(carry);
        }
        reverse(digits.begin(), digits.end());
        return digits;
    }
};
