class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for (int i = 0; i < image.size(); i++) {
            for (int j = 0, k = image[i].size() - 1; j <= k; j++, k--) {
                if (j == k) {
                    image[i][j] = image[i][j] == 1 ? 0 : 1;
                } else {
                    image[i][j] = image[i][j] == 1 ? 0 : 1;
                    image[i][k] = image[i][k] == 1 ? 0 : 1;
                }
                swap(image[i][j], image[i][k]);
            }
        }
        return image;
    }
};
