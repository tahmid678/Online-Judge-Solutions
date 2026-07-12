class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int, int> uniqueElements;
        vector<int> rank;
        int i = 1;

        for (int num : arr) {
            uniqueElements[num]++;
        }
        for (auto& pair : uniqueElements) {
            pair.second = i;
            i++;
        }
        for (int num : arr) {
            rank.push_back(uniqueElements[num]);
        }
        return rank;
    }
};