class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int longestIncreasing = INT_MIN;
        int longestDecreasing = INT_MIN;
        int countIncreasing = 1;
        int countDecreasing = 1;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[i - 1]) {
                countIncreasing++;
                longestDecreasing = max(longestDecreasing, countDecreasing);
                countDecreasing = 1;
            } else if (nums[i] < nums[i - 1]) {
                countDecreasing++;
                longestIncreasing = max(longestIncreasing, countIncreasing);
                countIncreasing = 1;
            } else {
                longestDecreasing = max(longestDecreasing, countDecreasing);
                longestIncreasing = max(longestIncreasing, countIncreasing);
                countIncreasing = 1;
                countDecreasing = 1;
            }
        }
        longestDecreasing = max(longestDecreasing, countDecreasing);
        longestIncreasing = max(longestIncreasing, countIncreasing);
        return max(longestIncreasing, longestDecreasing);
    }
};
