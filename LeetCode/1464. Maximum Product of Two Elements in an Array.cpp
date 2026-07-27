class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int biggest = 0;
        int secondBiggest = 0;

        for (int num : nums) {
            if (num > biggest) {
                secondBiggest = biggest;
                biggest = num;
            } else if (num > secondBiggest) {
                secondBiggest = num;
            }
        }

        return (biggest - 1) * (secondBiggest - 1);
    }
};