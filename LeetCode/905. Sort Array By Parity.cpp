class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> sortedArray;
        stack<int> oddNums;

        for (int num : nums) {
            if (num & 1)
                oddNums.push(num);
            else
                sortedArray.push_back(num);
        }
        while (!oddNums.empty()) {
            sortedArray.push_back(oddNums.top());
            oddNums.pop();
        }
        return sortedArray;
    }
};
