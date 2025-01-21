class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        long long rowOneSum = 0;
        long long notVisited = 0;

        for (int i = 0; i < 1; i++) {
            for (int j = 0; j < grid[i].size(); j++) {
                rowOneSum += grid[i][j];
            }
        }

        for (int i = 0; i < 1; i++) {
            for (int j = 0; j < grid[i].size(); j++) {
                rowOneSum -= grid[i][j];
                if (rowOneSum > notVisited + grid[i + 1][j]) {
                    notVisited += grid[i + 1][j];
                } else {
                    break;
                }
            }
        }
        return max(rowOneSum, notVisited);
    }
};
