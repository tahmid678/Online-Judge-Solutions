class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        vector<vector<int>> ret;
        vector<int> sumOfWeights;
        map<int, int> valueToWeights;

        for (auto item : items1) {
            valueToWeights[item[0]] += item[1];
        }
        for (auto item : items2) {
            valueToWeights[item[0]] += item[1];
        }
        for (auto pair : valueToWeights) {
            sumOfWeights.push_back(pair.first);
            sumOfWeights.push_back(pair.second);
            ret.push_back(sumOfWeights);
            sumOfWeights.clear();
        }
        return ret;
    }
};
