class Solution {
   public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> squaredList;
        int right = 0;
        int left = nums.size() - 1;

        for (int i = 0; i < nums.size(); i++) {
            nums[i] *= nums[i];
        }

        while (right <= left) {
            if (nums[right] > nums[left]) {
                squaredList.push_back(nums[right]);
                right++;
            } else {
                squaredList.push_back(nums[left]);
                left--;
            }
        }

        for (int i = 0, j = squaredList.size() - 1; i < j; i++, j--) {
            swap(squaredList[i], squaredList[j]);
        }

        return squaredList;
    }
};