class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        map<int, int> fruitsCount;
        int maxCount = 0;
        int l = 0, r = 0;

        while (r < fruits.size()) {
            fruitsCount[fruits[r]]++;
            if (fruitsCount.size() <= 2) {
                maxCount = max(maxCount, r - l + 1);
            } else {
                fruitsCount[fruits[l]]--;
                if (!fruitsCount[fruits[l]]) {
                    fruitsCount.erase(fruits[l]);
                }
                l++;
            }
            r++;
        }
        return maxCount;
    }
};
