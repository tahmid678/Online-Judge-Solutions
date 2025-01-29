class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> result;
        int difference = INT_MAX;

        sort(arr.begin(), arr.end());
        for (int i = 0; i < arr.size() - 1; i++) {
            difference = min(difference, arr[i + 1] - arr[i]);
        }
        for (int i = 0; i < arr.size() - 1; i++) {
            vector<int> pair;
            if (arr[i + 1] - arr[i] == difference) {
                pair.push_back(arr[i]);
                pair.push_back(arr[i + 1]);
                result.push_back(pair);
                pair.clear();
            }
        }
        return result;
    }
};
