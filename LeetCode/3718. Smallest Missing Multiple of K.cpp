class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int, bool> multiples;
        int i = 1;

        for (int num : nums) {
            multiples[num] = true;
        }

        while (true) {
            if (!multiples[k * i]) {
                return k * i;
            }
            i++;
        }
    }
};