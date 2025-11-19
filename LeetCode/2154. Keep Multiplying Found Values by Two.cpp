class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        unordered_map<int, bool> numExists;

        for (int num : nums) {
            numExists[num] = true;
        }
        while (numExists[original]) {
            original *= 2;
        }
        return original;
    }
};
