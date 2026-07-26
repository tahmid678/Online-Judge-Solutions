class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int first = INT_MIN, second = INT_MIN, third = INT_MIN;
        int minimum = INT_MAX, secondMinimum = INT_MAX;

        for (int num : nums) {
            if (num >= first) {
                third = second;
                second = first;
                first = num;
            } else if (num >= second) {
                third = second;
                second = num;
            } else if (num > third) {
                third = num;
            }
            if (num <= minimum) {
                secondMinimum = minimum;
                minimum = num;
            } else if (num < secondMinimum) {
                secondMinimum = num;
            }
        }

        return max(first * second * third, minimum * secondMinimum * first);
    }
};