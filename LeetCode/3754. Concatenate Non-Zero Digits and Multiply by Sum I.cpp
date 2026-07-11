class Solution {
public:
    long long sumAndMultiply(int n) {
        long long concatenate = 0;
        int sum = 0, exp = 0;

        while (n != 0) {
            if (n % 10 != 0) {
                concatenate += n % 10 * pow(10, exp);
                sum += n % 10;
                exp++;
            }
            n /= 10;
        }
        return concatenate * sum;
    }
};