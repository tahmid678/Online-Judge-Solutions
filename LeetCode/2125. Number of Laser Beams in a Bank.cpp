class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int> beams(bank.size() + 1);
        for (int i = 0; i < bank.size(); i++) {
            int count = 0;
            for (auto it : bank[i]) {
                if (it == '1') {
                    count++;
                }
            }
            beams[i] = count;
        }

        int row1 = beams[0];
        int row2 = beams[1];
        long long result = row1 * row2;

        for (int i = 2; i < bank.size(); i++) {
            if (row2 != 0) {
                row1 = row2;
            }
            row2 = beams[i];
            result += row1 * row2;
        }

        return result;
    }
};