class Solution {
public:
    int maximumSwap(int num) {
        string numToString = to_string(num);

        for (int i = 0; i < numToString.size(); i++) {
            int maxIndex = i;
            for (int j = i; j < numToString.size(); j++) {
                if (numToString[j] >= numToString[maxIndex]) {
                    maxIndex = j;
                }
            }
            if (numToString[i] != numToString[maxIndex]) {
                swap(numToString[i], numToString[maxIndex]);
                break;
            }
        }
        return stoi(numToString);
    }
};
