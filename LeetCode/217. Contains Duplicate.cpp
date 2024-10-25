class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> distinctNums;

        for (auto num : nums) {
            distinctNums.insert(num);
        }
        return distinctNums.size() == nums.size() ? false : true;
    }
};
