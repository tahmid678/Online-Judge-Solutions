class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        deque<int> dq;
        for (int i = 0; i < nums.size(); i++) {
            dq.push_back(nums[i]);
        }
        for (int i = 0; i < k; i++) {
            int last = dq.back();
            dq.pop_back();
            dq.push_front(last);
        }
        nums.clear();
        for (auto it = dq.begin(); it != dq.end(); it++) {
            nums.push_back(*it);
        }
    }
};
