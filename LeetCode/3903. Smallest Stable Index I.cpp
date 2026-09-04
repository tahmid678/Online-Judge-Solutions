class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int> smallestSuffix(nums.size());
        int smallest = INT_MAX;
        int biggest = INT_MIN;

        for (int i = nums.size() - 1; i >= 0; i--) {
            smallest = min(smallest, nums[i]);
            smallestSuffix[i] = smallest;
        }

        for (int i = 0; i < nums.size(); i++) {
            biggest = max(biggest, nums[i]);
            if (biggest - smallestSuffix[i] <= k) {
                return i;
            }
        }

        return -1;
    }
};