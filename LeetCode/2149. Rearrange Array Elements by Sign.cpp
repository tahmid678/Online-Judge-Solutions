class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> result(nums.size());
        queue<int> positiveNum;
        queue<int> negativeNum;

        for (int num : nums) {
            if (num > 0) {
                positiveNum.push(num);
            } else {
                negativeNum.push(num);
            }
        }
        for (int i = 0; i < result.size(); i++) {
            if (i & 1) {
                result[i] = negativeNum.front();
                negativeNum.pop();
            } else {
                result[i] = positiveNum.front();
                positiveNum.pop();
            }
        }
        return result;
    }
};
