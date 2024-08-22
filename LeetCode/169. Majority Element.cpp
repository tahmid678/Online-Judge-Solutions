class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> mp;
        int result;

        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }
        for (auto it : mp) {
            if (it.second > nums.size() / 2) {
                result = it.first;
                break;
            }
        }
        return result;
    }
};
