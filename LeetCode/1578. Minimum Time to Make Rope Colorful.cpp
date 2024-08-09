class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        long long minTime = 0;

        for (int i = 0; i < colors.size() - 1; i++) {
            if (colors[i] == colors[i + 1]) {
                minTime += min(neededTime[i], neededTime[i + 1]);
                if (neededTime[i] > neededTime[i + 1]) {
                    swap(neededTime[i], neededTime[i + 1]);
                }
            }
        }
        return minTime;
    }
};
