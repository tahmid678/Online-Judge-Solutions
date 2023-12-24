class Solution {
public:
    int minOperations(string s) {
        vector<int> stringOne;
        vector<int> stringTwo;
        char character = '0';
        int value1 = 0, value2 = 0;

        for (int i = 0; i < s.size(); i++) {
            stringOne.push_back(character);
            if (s[i] != stringOne[i]) {
                value1++;
            }
            character = character == '0' ? '1' : '0';
            stringTwo.push_back(character);
            if (s[i] != stringTwo[i]) {
                value2++;
            }
        }

        return value1 >= value2 ? value2 : value1;
    }
};