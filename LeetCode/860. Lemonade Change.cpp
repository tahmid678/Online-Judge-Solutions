class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        map<int, int> spares;
        for (int i = 0; i < bills.size(); i++) {
            if (bills[i] == 10) {
                if (spares[5] != 0) {
                    spares[5]--;
                    spares[10]++;
                    continue;
                }
                return false;
            } else if (bills[i] == 20) {
                if (spares[10] != 0 && spares[5] != 0) {
                    spares[10]--;
                    spares[5]--;
                    continue;
                } else if (spares[5] >= 3) {
                    spares[5] -= 3;
                    continue;
                }
                return false;
            } else {
                spares[bills[i]]++;
            }
        }
        return true;
    }
};
