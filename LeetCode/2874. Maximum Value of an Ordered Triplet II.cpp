class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int size = nums.size();
        vector<int> leftMax(size);
        vector<int> rightMax(size);
        long long value = 0;

        for (int i = 1; i < size; i++) {
            leftMax[i] = max(leftMax[i - 1], nums[i - 1]);
            rightMax[size - 1 - i] = max(rightMax[size - i], nums[size - i]);
        }
        for (int j = 1; j < size; j++) {
            value = max(value, (long long)(leftMax[j] - nums[j]) * rightMax[j]);
        }
        return value;
    }
};
