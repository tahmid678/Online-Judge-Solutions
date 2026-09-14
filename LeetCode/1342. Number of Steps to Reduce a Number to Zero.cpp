class Solution {
public:
    int numberOfSteps(int num) {
        int stepsCount = 0;

        while (num) {
            if (num & 1) {
                num -= 1;
            } else {
                num >>= 1;
            }
            stepsCount++;
        }

        return stepsCount;
    }
};