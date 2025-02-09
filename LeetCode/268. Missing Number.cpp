class Solution {
public:
    int missingNumber(vector<int>& nums) {
        long long arraySum = 0;
        long long totalSum;
        long long largestNum;

        for (int num : nums) {
            arraySum += num;
        }
        largestNum = nums.size();
        totalSum = (largestNum * (largestNum + 1)) / 2;
        return totalSum - arraySum;
    }
};
