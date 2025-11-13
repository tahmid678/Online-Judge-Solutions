class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int index = -1;
        int leftSum = 0, rightSum = 0;

        for (int num : nums) {
            rightSum += num;
        }
        for (int i = 0; i < nums.size(); i++) {
            rightSum -= nums[i];
            if (leftSum == rightSum) {
                index = i;
                break;
            }
            leftSum += nums[i];
        }
        return index;
    }
};
