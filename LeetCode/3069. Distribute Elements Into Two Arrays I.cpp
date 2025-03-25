class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> arr1;
        vector<int> arr2;

        for (int i = 0; i < nums.size(); i++) {
            if (i == 0) {
                arr1.push_back(nums[i]);
            } else if (i == 1) {
                arr2.push_back(nums[i]);
            } else if (arr1.back() > arr2.back()) {
                arr1.push_back(nums[i]);
            } else {
                arr2.push_back(nums[i]);
            }
        }
        for (int num : arr2) {
            arr1.push_back(num);
        }
        return arr1;
    }
};
