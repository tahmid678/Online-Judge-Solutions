class Solution {
public:
    bool check(vector<int>& nums) {
        bool result = true;
        int splitCount = 0;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] >= nums[i - 1]) {
                continue;
            } else {
                splitCount++;
            }
        }
        if (splitCount == 1) {
            result = nums[0] >= nums[nums.size() - 1];
        } else if (splitCount > 1) {
            result = false;
        }
        return result;
    }
};
