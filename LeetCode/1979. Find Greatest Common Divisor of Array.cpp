class Solution {
private:
    int maxNum = INT_MIN;
    int minNum = INT_MAX;

public:
    int findGCD(vector<int>& nums) {
        for (int num : nums) {
            this->maxNum = max(this->maxNum, num);
            this->minNum = min(this->minNum, num);
        }

        while (this->maxNum && this->minNum) {
            this->maxNum %= this->minNum;
            swap(this->maxNum, this->minNum);
        }
        return this->maxNum;
    }
};
