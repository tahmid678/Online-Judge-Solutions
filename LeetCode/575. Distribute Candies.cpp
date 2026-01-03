class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        map<int, bool> types;

        for (int type : candyType) {
            types[type] = true;
        }
        return min(candyType.size() / 2, types.size());
    }
};
