class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> result;
        map<int, int> numFreq;

        for (auto num : nums) {
            if (numFreq[num] == 1) {
                result.push_back(num);
            }
            numFreq[num]++;
            if (result.size() == 2)
                break;
        }
        return result;
    }
};
