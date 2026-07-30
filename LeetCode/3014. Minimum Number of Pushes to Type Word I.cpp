class Solution {
public:
    int minimumPushes(string word) {
        int pushCount = 0;
        int push = 1;

        for (int i = 0; i < word.size(); i++) {
            pushCount += push;
            if ((i + 1) % 8 == 0) {
                push++;
            }
        }

        return pushCount;
    }
};