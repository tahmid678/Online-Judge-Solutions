class Solution {
public:
    long long countCommas(long long n) {
        long long commaCount = 0;
        long long currentNum = 1000;

        while (currentNum <= n) {
            commaCount += n - currentNum + 1;
            currentNum *= 1000;
        }

        return commaCount;
    }
};