class Solution {
public:
    int zeroFloor(vector<int>& nums) {
        int negativeCount = nums.size();
        int l = 0, r = nums.size() - 1;

        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (nums[mid] < 0) {
                l = mid + 1;
            } else if (nums[mid] >= 0) {
                r = mid - 1;
                negativeCount = mid;
            }
        }
        return negativeCount;
    }

    int zeroCeiling(vector<int>& nums) {
        int positiveCount = nums.size();
        int l = 0, r = nums.size() - 1;

        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (nums[mid] <= 0) {
                l = mid + 1;
            } else if (nums[mid] > 0) {
                positiveCount = mid;
                r = mid - 1;
            }
        }
        return positiveCount;
    }

    int maximumCount(vector<int>& nums) {
        int positiveCount = nums.size() - zeroCeiling(nums);
        int negativeCount = zeroFloor(nums);
        return max(positiveCount, negativeCount);
    }
};
