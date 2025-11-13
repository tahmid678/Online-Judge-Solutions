class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> prefixSum;
        int sum = 0;
        int index = -1, leftSum, rightSum;

        for (int num : nums) {
            sum += num;
            prefixSum.push_back(sum);
        }
        for (int i = 0; i < nums.size(); i++) {
            if (i == 0) {
                leftSum = 0;
                rightSum = sum - nums[i];
            } else if (i == nums.size() - 1) {
                leftSum = sum - nums[i];
                rightSum = 0;
            } else {
                leftSum = prefixSum[i - 1];
                rightSum = sum - nums[i] - leftSum;
            }
            if (leftSum == rightSum) {
                index = i;
                break;
            }
        }
        return index;
    }
};
