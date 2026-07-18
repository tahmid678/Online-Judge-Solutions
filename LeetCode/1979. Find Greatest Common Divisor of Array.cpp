class Solution {
private:
    int minNum = INT_MAX;
    int maxNum = INT_MIN;

public:
    int findGCD(vector<int>& nums) {
        for (int num : nums) {
            minNum = min(num, minNum);
            maxNum = max(num, maxNum);
        }

        return gcd(minNum, maxNum);
    }
};
