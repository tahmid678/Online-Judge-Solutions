class Solution {
public:
    bool checkParity(int num) {
        if (num % 2)
            return true;
        return false;
    }

    bool isArraySpecial(vector<int>& nums) {
        bool result = true;

        for (int i = 1; i < nums.size(); i++) {
            if (checkParity(nums[i - 1]) == checkParity(nums[i])) {
                result = false;
                break;
            }
        }
        return result;
    }
};
