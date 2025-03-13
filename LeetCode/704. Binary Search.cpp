class Solution {
public:
    int findTarget(vector<int>& nums, int target, int l, int r) {
        int targetIndex = -1;

        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (nums[mid] == target) {
                targetIndex = mid;
                break;
            } else if (target < nums[mid]) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return targetIndex;
    }

    int search(vector<int>& nums, int target) {
        return findTarget(nums, target, 0, nums.size() - 1);
    }
};
