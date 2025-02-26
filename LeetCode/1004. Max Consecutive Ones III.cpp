class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxLength = 0;
        int zeroesCount = 0;
        int l = 0, r = 0;

        while (r < nums.size()) {
            if (nums[r] == 0) {
                zeroesCount++;
            }
            if (zeroesCount <= k) {
                maxLength = max(maxLength, r - l + 1);
            } else {
                if (nums[l] == 0) {
                    zeroesCount--;
                }
                l++;
            }
            r++;
        }
        return maxLength;
    }
};
