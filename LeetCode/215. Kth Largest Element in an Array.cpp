class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> desc;
        int i = 1;
        int result;

        for (auto num : nums) {
            desc.push(num);
        }
        while (!desc.empty()) {
            if (i == k) {
                result = desc.top();
                break;
            } else {
                desc.pop();
                i++;
            }
        }
        return result;
    }
};
