class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int maxDistance = INT_MIN;
        int minElement = arrays[0][0];
        int maxElement = arrays[0][arrays[0].size() - 1];

        for (int i = 1; i < arrays.size(); i++) {
            int m0 = arrays[i][0];
            int m1 = arrays[i][arrays[i].size() - 1];
            int distance = max(abs(minElement - m1), abs(maxElement - m0));
            minElement = min(minElement, m0);
            maxElement = max(maxElement, m1);
            maxDistance = max(maxDistance, distance);
        }
        return maxDistance;
    }
};
