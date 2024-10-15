class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> frequencies;
        vector<pair<int, int>> listOfPairs;
        vector<int> result;

        for (auto num : nums) {
            frequencies[num]++;
        }
        for (auto itr : frequencies) {
            listOfPairs.push_back(itr);
        }
        sort(listOfPairs.begin(), listOfPairs.end(),
             [](auto& a, auto& b) { return a.second > b.second; });

        for (int i = 0; i < k; i++) {
            result.push_back(listOfPairs[i].first);
        }
        return result;
    }
};
