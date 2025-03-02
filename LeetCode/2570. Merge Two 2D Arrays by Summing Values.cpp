class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>> result;
        int i = 0, j = 0;

        while (i < nums1.size() || j < nums2.size()) {
            vector<int> pair(2);
            if (i < nums1.size() && j < nums2.size()) {
                if (nums1[i][0] == nums2[j][0]) {
                    pair[0] = nums1[i][0];
                    pair[1] = nums1[i][1] + nums2[j][1];
                    i++;
                    j++;
                } else if (nums1[i][0] < nums2[j][0]) {
                    pair = nums1[i];
                    i++;
                } else {
                    pair = nums2[j];
                    j++;
                }
            } else if (i < nums1.size()) {
                pair = nums1[i];
                i++;
            } else {
                pair = nums2[j];
                j++;
            }
            result.push_back(pair);
        }
        return result;
    }
};
