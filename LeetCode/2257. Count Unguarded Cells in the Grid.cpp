class Solution {
public:
    int countUnguarded(int m, int n, vector<vector<int>>& guards,vector<vector<int>>& walls) {
        vector<vector<char>> cells(m, vector<char>(n, 'U'));
        int result = 0;

        for (vector<int>& coords : guards) {
            cells[coords[0]][coords[1]] = 'G';
        }

        for (vector<int>& coords : walls) {
            cells[coords[0]][coords[1]] = 'W';
        }

        for (vector<int>& coords : guards) {
            int row = coords[0];
            int col = coords[1];

            for (int i = col - 1; i >= 0; i--) {
                if (cells[row][i] == 'G' || cells[row][i] == 'W')
                    break;
                cells[row][i] = 'X';
            }

            for (int i = col + 1; i < n; i++) {
                if (cells[row][i] == 'G' || cells[row][i] == 'W')
                    break;
                cells[row][i] = 'X';
            }

            for (int i = row - 1; i >= 0; i--) {
                if (cells[i][col] == 'G' || cells[i][col] == 'W')
                    break;
                cells[i][col] = 'X';
            }

            for (int i = row + 1; i < m; i++) {
                if (cells[i][col] == 'G' || cells[i][col] == 'W')
                    break;
                cells[i][col] = 'X';
            }
        }

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (cells[i][j] == 'U')
                    result++;
            }
        }
        return result;
    }
};
