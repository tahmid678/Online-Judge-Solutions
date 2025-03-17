class Solution {
public:
    bool divideArray(vector<int>& nums) {
        bool result = true;
        int i = 0;

        sort(nums.begin(), nums.end());
        while (i < nums.size() - 1) {
            if (nums[i] != nums[i + 1]) {
                result = false;
                break;
            }
            i += 2;
        }
        return result;
    }
};
