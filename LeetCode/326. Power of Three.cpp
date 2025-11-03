class Solution {
public:
    bool isPowerOfThree(int n) {
        return isPower(n, 0);
    }

    bool isPower(int n, int i) {
        if (pow(3, i) == n)
            return true;
        else if (pow(3, i) < n)
            return isPower(n, i + 1);
        else
            return false;
    }
};
