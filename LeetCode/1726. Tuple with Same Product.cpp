class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        int countTuples = 0;
        map<int, int> countPairs;

        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                countPairs[nums[i] * nums[j]]++;
            }
        }
        for (auto pair : countPairs) {
            countTuples += (pair.second - 1) * pair.second * 4;
        }
        return countTuples;
    }
};
