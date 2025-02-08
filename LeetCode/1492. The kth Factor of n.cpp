class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> factor;

        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                factor.push_back(i);
            }
            if (factor.size() == k) {
                break;
            }
        }
        return factor.size() >= k ? factor[k - 1] : -1;
    }
};
