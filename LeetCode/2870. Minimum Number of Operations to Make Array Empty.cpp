class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int, int> minimumOp;
        int result = 0;
        bool possible = true;

        for (auto it : nums) {
            minimumOp[it]++;
        }

        for (auto it : minimumOp) {
            if (it.second == 1) {
                possible = false;
                break;
            } else if (it.second % 3 == 0) {
                result += it.second / 3;
            } else {
                while (true) {
                    it.second -= 3;
                    if (it.second > 2) {
                        result++;
                    } else {
                        it.second += 3;
                        break;
                    }
                }
                result += it.second / 2;
            }
        }

        return possible ? result : -1;
    }
};