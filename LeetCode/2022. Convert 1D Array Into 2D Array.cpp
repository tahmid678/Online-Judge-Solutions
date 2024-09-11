class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> result;
        if (original.size() > m * n || original.size() < m * n) {
            return result;
        }
        vector<int> row;
        int i = 0, j = 0;
        for (int i = 0; i < original.size(); i++) {
            row.push_back(original[i]);
            j++;
            if (j >= n) {
                result.push_back(row);
                row.clear();
                j = 0;
            }
        }
        return result;
    }
};
