class Solution {
public:
    bool checkSum(int n, int i) {
        if (n == 0) {
            return true;
        }
        if (pow(3, i) > n) {
            return false;
        }
        bool c1 = checkSum(n - pow(3, i), i + 1);
        bool c2 = checkSum(n, i + 1);
        return c1 || c2;
    }

    bool checkPowersOfThree(int n) {
        return checkSum(n, 0);
    }
};
