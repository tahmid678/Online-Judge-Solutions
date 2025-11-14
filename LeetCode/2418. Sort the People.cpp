class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<string> sortedNames;
        map<int, int> heightsToIndex;

        for (int i = 0; i < heights.size(); i++) {
            heightsToIndex[heights[i]] = i;
        }
        for (pair<int, int> p : heightsToIndex) {
            sortedNames.push_back(names[p.second]);
        }
        reverse(sortedNames.begin(), sortedNames.end());
        return sortedNames;
    }
};
