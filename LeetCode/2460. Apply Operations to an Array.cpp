class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        vector<int> result;
        vector<int> zeroes;

        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == 0) {
                zeroes.push_back(nums[i]);
                continue;
            } else if (nums[i] == nums[i + 1]) {
                result.push_back(nums[i] * 2);
                nums[i + 1] = 0;
            } else {
                result.push_back(nums[i]);
            }
        }
        nums.back() == 0 ? zeroes.push_back(0) : result.push_back(nums.back());
        for (int i = 0; i < zeroes.size(); i++) {
            result.push_back(zeroes[i]);
        }
        return result;
    }
};
