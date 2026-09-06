class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int minimumNum = INT_MAX;
        bool oddExist = false;

        for (int num : nums1) {
            minimumNum = min(minimumNum, num);
            if (num % 2) {
                oddExist = true;
            }
        }

        if (!oddExist) {
            return true;
        }

        return minimumNum % 2 ? true : false;
    }
};