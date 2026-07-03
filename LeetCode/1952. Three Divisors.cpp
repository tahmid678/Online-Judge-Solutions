class Solution {
public:
    bool isThree(int n) {
        bool hasThree = true;
        int countDivisor = 0;

        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                countDivisor++;
            }
        }

        return countDivisor == 1 ? true : false;
    }
};