class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int> suffixMinimum(nums.size());
        int minimumNum = INT_MAX;
        int maximumNum = INT_MIN;

        for (int i = nums.size() - 1; i >= 0; i--) {
            minimumNum = min(minimumNum, nums[i]);
            suffixMinimum[i] = minimumNum;
        }

        for (int i = 0; i < nums.size(); i++) {
            maximumNum = max(maximumNum, nums[i]);
            if (maximumNum - suffixMinimum[i] <= k) {
                return i;
            }
        }

        return -1;
    }
};