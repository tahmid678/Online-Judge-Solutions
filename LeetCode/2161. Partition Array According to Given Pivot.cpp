class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> smaller;
        vector<int> pivots;
        vector<int> greater;

        for (int num : nums) {
            if (num < pivot) {
                smaller.push_back(num);
            } else if (num > pivot) {
                greater.push_back(num);
            } else {
                pivots.push_back(num);
            }
        }

        for (int num : pivots) {
            smaller.push_back(num);
        }

        for (int num : greater) {
            smaller.push_back(num);
        }
        return smaller;
    }
};
