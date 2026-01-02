class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        map<int, int> numCount;
        int result;

        for (int num : nums) {
            numCount[num]++;
            if (numCount[num] == nums.size() / 2) {
                result = num;
                break;
            }
        }
        return result;
    }
};
