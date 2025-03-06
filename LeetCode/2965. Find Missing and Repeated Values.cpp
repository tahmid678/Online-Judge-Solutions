class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        map<int, int> numFreq;
        vector<int> ans(2);
        int i = 1;

        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[i].size(); j++) {
                numFreq[grid[i][j]]++;
            }
        }
        for (auto pair : numFreq) {
            if (pair.first != i) {
                ans[1] = ans[1] == 0 ? i : ans[1];
            }
            if (pair.second == 2) {
                ans[0] = pair.first;
            }
            i++;
        }
        ans[1] = ans[1] == 0 ? i : ans[1];
        return ans;
    }
};
