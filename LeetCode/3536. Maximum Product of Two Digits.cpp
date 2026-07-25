class Solution {
public:
    int maxProduct(int n) {
        int biggest = 0;
        int secondBiggest = 0;

        while (n) {
            if (biggest < n % 10) {
                secondBiggest = biggest;
                biggest = n % 10;
            } else if (secondBiggest < n % 10) {
                secondBiggest = n % 10;
            }
            n /= 10;
        }

        return biggest * secondBiggest;
    }
};