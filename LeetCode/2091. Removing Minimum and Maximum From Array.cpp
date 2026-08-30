class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int minIndex = 0;
        int maxIndex = 0;
        int minNumber = INT_MAX;
        int maxNumber = INT_MIN;

        for (int i = 0; i < nums.size(); i++) {
            if (minNumber > nums[i]) {
                minNumber = nums[i];
                minIndex = i;
            }
            if (maxNumber < nums[i]) {
                maxNumber = nums[i];
                maxIndex = i;
            }
        }

        if (minIndex > maxIndex) {
            swap(minIndex, maxIndex);
        }

        int front = maxIndex + 1;
        int back = nums.size() - minIndex;
        int both = minIndex + 1 + nums.size() - maxIndex;

        return min({front, back, both});
    }
};