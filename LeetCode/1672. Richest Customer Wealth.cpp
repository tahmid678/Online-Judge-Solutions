class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = INT_MIN;
        int currentWealth = 0;

        for (vector<int> account : accounts) {
            for (int wealth : account) {
                currentWealth += wealth;
            }
            maxWealth = max(maxWealth, currentWealth);
            currentWealth = 0;
        }

        return maxWealth;
    }
};