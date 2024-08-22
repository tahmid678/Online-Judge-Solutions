class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int, int> frequent;
        int temp = INT_MIN;
        int result = -1;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 0) {
                frequent[nums[i]]++;
            }
        }

        for (auto element : frequent) {
            if (element.second > temp) {
                result = element.first;
                temp = element.second;
            } else if (element.second == temp) {
                result = min(result, element.first);
            }
        }
        return result;
    }
};
