class Solution {
public:
    int commonFactors(int a, int b) {
        int smallest = min(a, b);
        int countFactors = 0;

        for (int i = 2; i <= smallest; i++) {
            if (a % i == 0 && b % i == 0)
                countFactors++;
        }
        return countFactors + 1;
    }
};