class Solution {
public:
    void position(vector<int>& nums, vector<int>& result, int l, int r, int t) {
        if (l <= r) {
            int mid = l + (r - l) / 2;
            if (nums[mid] == t) {
                result[0] = min(result[0], mid);
                result[1] = max(result[1], mid);
                position(nums, result, l, mid - 1, t);
                position(nums, result, mid + 1, r, t);
            } else if (nums[mid] < t) {
                position(nums, result, mid + 1, r, t);
            } else {
                position(nums, result, l, mid - 1, t);
            }
        }
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int size = nums.size();
        vector<int> result = {size, -1};
        position(nums, result, 0, size - 1, target);
        result[0] = result[0] == size ? -1 : result[0];
        return result;
    }
};
