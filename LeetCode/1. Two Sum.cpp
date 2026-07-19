class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> indices(2);
        map<int, int> numExists;

        for (int i = 0; i < nums.size(); i++) {
            if (numExists[target - nums[i]] != 0) {
                indices[0] = i;
                indices[1] = --numExists[target - nums[i]];
                return indices;
            }
            numExists[nums[i]] = i + 1;
        }

        return indices;
    }
};