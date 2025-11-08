class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> tempNums = nums;
        map<int, int> numFreqs;
        int duplicates = 0;

        sort(tempNums.begin(), tempNums.end());
        for (int i = 0; i < tempNums.size() - 1; i++) {
            numFreqs[tempNums[i]] = i - 0 - duplicates;
            if (tempNums[i] == tempNums[i + 1])
                duplicates++;
            else
                duplicates = 0;
        }
        numFreqs[*tempNums.rbegin()] = nums.size() - 1 - duplicates;
        for (int i = 0; i < nums.size(); i++) {
            nums[i] = numFreqs[nums[i]];
        }
        return nums;
    }
};
