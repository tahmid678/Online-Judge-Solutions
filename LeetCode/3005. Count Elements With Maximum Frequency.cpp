class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int, int> numFreqs;
        int totalFreqs = 0;
        int maxFreqs = 0;

        for (auto num : nums) {
            numFreqs[num]++;
            if (numFreqs[num] > maxFreqs) {
                maxFreqs = numFreqs[num];
                totalFreqs = maxFreqs;
            } else if (numFreqs[num] == maxFreqs) {
                totalFreqs += maxFreqs;
            }
        }
        return totalFreqs;
    }
};
