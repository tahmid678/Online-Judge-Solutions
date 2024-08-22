class Solution {
public:
    double myPow(double x, int n) {
        double result = 1;
        if (n < 0) {
            x = 1 / x;
        }

        n = abs(n);
        while (n) {
            if (n % 2 == 1) {
                result *= x;
            }
            x *= x;
            n /= 2;
        }
        return result;
    }
};
