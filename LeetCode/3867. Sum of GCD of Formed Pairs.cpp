class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int> prefixGCD;
        long long sumGCD = 0;
        int maxNum = INT_MIN, i = 0, j = nums.size() - 1;

        for (int num : nums) {
            maxNum = max(num, maxNum);
            prefixGCD.push_back(gcd(num, maxNum));
        }

        sort(prefixGCD.begin(), prefixGCD.end());
        while (i < j) {
            sumGCD += gcd(prefixGCD[i], prefixGCD[j]);
            i++;
            j--;
        }

        return sumGCD;
    }
};