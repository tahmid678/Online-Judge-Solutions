class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int> sortedElements;
        long long result = 0;
        int num;

        for (auto num : nums) {
            sortedElements.push(num);
        }
        while (k > 0) {
            num = sortedElements.top();
            result += num;
            sortedElements.pop();
            sortedElements.push(ceil(num / 3.0));
            k--;
        }
        return result;
    }
};
