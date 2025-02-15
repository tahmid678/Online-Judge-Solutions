class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum = 0;
        int maxPoints = 0;
        int i = k - 1, j = cardPoints.size() - 1;

        for (int i = 0; i < k; i++) {
            sum += cardPoints[i];
        }

        maxPoints = max(sum, maxPoints);
        while (i >= 0) {
            sum -= cardPoints[i];
            sum += cardPoints[j];
            maxPoints = max(sum, maxPoints);
            i--;
            j--;
        }
        return maxPoints;
    }
};
