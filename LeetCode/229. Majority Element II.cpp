class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int element1 = nums[0];
        int element2 = nums[0];
        int cnt1 = 0, cnt2 = 0;
        vector<int> result;

        for (int i = 0; i < nums.size(); i++) {
            if (element1 == nums[i]) {
                cnt1++;
            } else if (element2 == nums[i]) {
                cnt2++;
            } else if (cnt1 == 0) {
                element1 = nums[i];
                cnt1++;
            } else if (cnt2 == 0) {
                element2 = nums[i];
                cnt2++;
            } else {
                cnt1--;
                cnt2--;
            }
        }

        cnt1 = 0;
        cnt2 = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == element1) {
                cnt1++;
            } else if (nums[i] == element2) {
                cnt2++;
            }
        }
        if (cnt1 > nums.size() / 3) {
            result.push_back(element1);
        }
        if (cnt2 > nums.size() / 3) {
            result.push_back(element2);
        }
        return result;
    }
};
