class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int size = nums.size();
        sort(nums.begin(), nums.end(), greater<int>());
        return (nums[0]*nums[1])-(nums[size-2]*nums[size-1]);
    }
};
