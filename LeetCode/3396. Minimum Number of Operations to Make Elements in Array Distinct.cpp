class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        map<int, int> numFreq;
        int numCount = 0;
        int opCount = 0;

        reverse(nums.begin(), nums.end());
        for (int num : nums) {
            numFreq[num]++;
            numCount++;
        }
        while (numCount != numFreq.size()) {
            opCount++;
            int count = 3;
            while (count-- && nums.size()) {
                int lastElement = nums.back();
                nums.pop_back();
                numFreq[lastElement]--;
                if (!numFreq[lastElement]) {
                    numFreq.erase(lastElement);
                }
                numCount--;
            }
            if (!nums.size()) {
                break;
            }
        }
        return opCount;
    }
};
