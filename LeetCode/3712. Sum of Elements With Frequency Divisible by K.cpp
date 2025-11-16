class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        unordered_map<int, int> numFreqs;
        int sum = 0;

        for (int num : nums) {
            numFreqs[num]++;
        }
        for (pair<int, int> p : numFreqs) {
            if (p.second % k == 0)
                sum += p.first * p.second;
        }
        return sum;
    }
};
