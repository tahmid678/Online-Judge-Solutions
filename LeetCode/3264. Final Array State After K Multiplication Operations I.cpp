class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        vector<pair<int, int>> v;
        for (int i = 0; i < nums.size(); i++) {
            v.push_back(make_pair(nums[i], i));
        }

        make_heap(v.begin(), v.end(), greater<>());
        while (k--) {
            pop_heap(v.begin(), v.end(), greater<>());
            auto [num, i] = v.back();
            v.pop_back();
            nums[i] = nums[i] * multiplier;
            v.push_back(make_pair(nums[i], i));
            push_heap(v.begin(), v.end(), greater<>());
        }
        return nums;
    }
};
