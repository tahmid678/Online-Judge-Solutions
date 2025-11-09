class Solution {
public:
    int countOperations(int num1, int num2) {
        int opCount = 0;

        if (num1 < num2)
            swap(num1, num2);
        while (num1 && num2) {
            opCount += num1 / num2;
            num1 %= num2;
            swap(num1, num2);
        }
        return opCount;
    }
};
