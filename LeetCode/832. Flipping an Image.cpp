class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for (int i = 0; i < image.size(); i++) {
            int colSize = image[i].size();
            for (int j = 0, k = colSize - 1; j < colSize && j < k; j++, k--) {
                image[i][j] = image[i][j] == 1 ? 0 : 1;
                image[i][k] = image[i][k] == 1 ? 0 : 1;
                swap(image[i][j], image[i][k]);
            }
            if (colSize % 2) {
                image[i][colSize / 2] = image[i][colSize / 2] == 1 ? 0 : 1;
            }
        }
        return image;
    }
};
