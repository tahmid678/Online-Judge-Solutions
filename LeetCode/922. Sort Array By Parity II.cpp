class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> result(nums.size());
        int i = 0, j = 1;

        for (int num : nums) {
            if (num & 1) {
                result[j] = num;
                j += 2;
            } else {
                result[i] = num;
                i += 2;
            }
        }
        return result;
    }
};
