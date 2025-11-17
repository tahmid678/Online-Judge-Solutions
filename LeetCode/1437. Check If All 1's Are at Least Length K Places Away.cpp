class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        bool result = true;
        int lastOne = -1;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1 && lastOne < 0) {
                lastOne = i;
            } else if (nums[i] == 1 && i - lastOne - 1 >= k) {
                lastOne = i;
            } else if (nums[i] == 1 && i - lastOne - 1 < k) {
                result = false;
                break;
            }
        }
        return result;
    }
};
