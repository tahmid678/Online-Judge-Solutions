class Solution {
public:
    int digitSum(int num) {
        int sum = 0;
        while (num) {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }

    int maximumSum(vector<int>& nums) {
        map<int, int> sumToNum;
        int maxSum = -1;

        for (int num : nums) {
            int sum = digitSum(num);
            if (sumToNum[sum] != 0) {
                maxSum = max(maxSum, sumToNum[sum] + num);
                sumToNum[sum] = sumToNum[sum] < num ? num : sumToNum[sum];
            } else {
                sumToNum[sum] = num;
            }
        }
        return maxSum;
    }
};
