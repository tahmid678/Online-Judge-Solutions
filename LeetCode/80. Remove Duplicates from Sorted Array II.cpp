class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int previousElement = nums[0];
        int frequency = 1;

        for (int i = 1; i < nums.size(); i++) {
            if (previousElement == nums[i]) {
                frequency++;
            } else if (previousElement != nums[i]) {
                previousElement = nums[i];
                frequency = 1;
            }
            if (frequency > 2) {
                nums.erase(nums.begin() + i);
                i--;
            }
        }
        return nums.size();
    }
};
