class Solution {
public:
    int smallestNumber(int n) {
        int result = 0, i = 0;

        while (n) {
            result += pow(2, i);
            n /= 2;
            i++;
        }
        return result;
    }
};
