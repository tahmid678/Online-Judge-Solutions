class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int result = 0;
        int divCount = 0;
        int sum = 0;

        for (int num : nums) {
            for (int i = 1; i <= sqrt(num); i++) {
                if (num % i == 0) {
                    if (num / i == i) {
                        sum += i;
                        divCount += 1;
                    } else {
                        sum += i;
                        sum += num / i;
                        divCount += 2;
                    }
                }
            }
            if (divCount == 4) {
                result += sum;
            }
            sum = 0;
            divCount = 0;
        }
        return result;
    }
};
