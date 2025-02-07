class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxNum = 0;
        int l = 0, r = 0, zeroes = 0;

        while (r < nums.size()) {
            if (nums[r] == 0) {
                zeroes++;
            }
            if (!zeroes) {
                maxNum = max(maxNum, r - l + 1);
            } else {
                if (nums[l] == 0)
                    zeroes--;
                l++;
            }
            r++;
        }
        return maxNum;
    }
};
