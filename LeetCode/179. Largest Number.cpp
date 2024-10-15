class Solution {
public:
    string largestNumber(vector<int>& nums) {
        string result = "";
        sort(nums.begin(), nums.end(), [](int a, int b) {
            string a1 = to_string(a);
            string b1 = to_string(b);
            return a1 + b1 > b1 + a1;
        });
        for (auto num : nums) {
            result += to_string(num);
        }
        if (nums[0] == 0) {
            return "0";
        }
        return result;
    }
};
