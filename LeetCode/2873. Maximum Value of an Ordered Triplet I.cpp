class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int size = nums.size();
        vector<int> leftMax(size), rightMax(size);
        long long value = 0;

        for (int i = 1; i < size; i++) {
            leftMax[i] = max(leftMax[i - 1], nums[i - 1]);
            rightMax[size - 1 - i] = max(rightMax[size - i], nums[size - i]);
        }
        for (int i = 1; i < size; i++) {
            value = max(value, (long long)(leftMax[i] - nums[i]) * rightMax[i]);
        }
        return value;
    }
};
