class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        vector<int> decrypted(code.size(), 0);
        int sum, j, cnt;

        if (k == 0) {
            return decrypted;
        } else {
            for (int i = 0; i < code.size(); i++) {
                sum = 0;
                cnt = 0;
                if (k > 0) {
                    j = i + 1;
                    while (cnt != k) {
                        sum += code[j % code.size()];
                        j++;
                        cnt++;
                    }
                    decrypted[i] = sum;
                } else {
                    j = i - 1;
                    while (cnt != abs(k)) {
                        if (j < 0) {
                            sum += code[j + code.size()];
                        } else {
                            sum += code[j];
                        }
                        j--;
                        cnt++;
                    }
                    decrypted[i] = sum;
                }
            }
        }
        return decrypted;
    }
};
