class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int, greater<int>> distinctNum;
        int result, i = 1;

        for (int num : nums) {
            distinctNum.insert(num);
        }
        if (distinctNum.size() < 3) {
            return *distinctNum.begin();
        }
        auto it = distinctNum.begin();
        it++;
        it++;
        return *it;
    }
};
