class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> missingElements;
        unordered_map<int, bool> existingElements;
        int smallest = INT_MAX;
        int biggest = INT_MIN;

        for (int num : nums) {
            existingElements[num] = true;
            if (num > biggest) {
                biggest = num;
            }
            if (num < smallest) {
                smallest = num;
            }
        }

        for (int i = smallest + 1; i < biggest; i++) {
            if (!existingElements[i]) {
                missingElements.push_back(i);
            }
        }

        return missingElements;
    }
};