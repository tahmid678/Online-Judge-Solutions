class Solution {
public:
    int minDifference(vector<int>& nums) {
        if (nums.size() <= 4) {
            return 0;
        } else {
            vector<int> result;
            sort(nums.begin(), nums.end());
            for (int i = 3, j = nums.size() - 1; i >= 0; i--, j--) {
                result.push_back(nums[j] - nums[i]);
            }
            auto minDiff = min_element(result.begin(), result.end());
            return *minDiff;
        }
    }
};
