class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> sums;
        int modulo = 1000000007;

        for (int i = 0; i < n; i++) {
            int subSum = 0;
            for (int j = i; j < n; j++) {
                subSum += nums[j];
                sums.push_back(subSum);
            }
        }

        sort(sums.begin(), sums.end());
        int result = 0;

        for (int i = left - 1; i < right; i++) {
            result += sums[i] % modulo;
            result %= modulo;
        }
        return result;
    }
};
