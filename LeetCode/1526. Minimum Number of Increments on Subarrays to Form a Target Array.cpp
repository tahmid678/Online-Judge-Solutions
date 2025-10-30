class Solution {
public:
    int minNumberOperations(vector<int>& target) {
        int result = target[0];

        for (int i = 1; i < target.size(); i++) {
            if (target[i] - target[i - 1] > 0) {
                result += target[i] - target[i - 1];
            }
        }
        return result;
    }
};
