class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<int> num(nums.size() + 1);
        int maxFrequency = -1;

        for (int i = 0; i < nums.size(); i++) {
            num[nums[i]]++;
            if (num[nums[i]] > maxFrequency) {
                maxFrequency = num[nums[i]];
            }
        }
        vector<vector<int>> result(maxFrequency);

        for (int i = 0; i < nums.size(); i++) {
            result[num[nums[i]] - 1].push_back(nums[i]);
            num[nums[i]]--;
        }

        return result;
    }
};