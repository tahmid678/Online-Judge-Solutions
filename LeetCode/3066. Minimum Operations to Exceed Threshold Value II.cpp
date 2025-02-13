class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long, vector<long>, greater<long>> values;
        int opCount = 0;
        long long x, y;

        for (int num : nums) {
            values.push(num);
        }
        while (values.size() > 1) {
            x = values.top();
            values.pop();
            y = values.top();
            values.pop();
            if (x < k || y < k) {
                opCount++;
                values.push(min(x, y) * 2 + max(x, y));
            } else {
                break;
            }
        }
        return opCount;
    }
};
