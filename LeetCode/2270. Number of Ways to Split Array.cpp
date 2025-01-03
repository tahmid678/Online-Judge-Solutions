class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        vector<long> preSum;
        long sum = 0;
        int splitCount = 0;
        for (int num : nums) {
            sum += num;
            preSum.push_back(sum);
        }
        for (int i = 0; i < preSum.size() - 1; i++) {
            if (preSum[i] >= sum - preSum[i]) {
                splitCount++;
            }
        }
        return splitCount;
    }
};
