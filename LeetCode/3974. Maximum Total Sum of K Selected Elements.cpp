class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        long long sum = 0;
        int right = nums.size() - 1;

        sort(nums.begin(), nums.end());
        while (k--) {
            sum += (long long)nums[right] * max(1, mul);
            mul--;
            right--;
        }

        return sum;
    }
};