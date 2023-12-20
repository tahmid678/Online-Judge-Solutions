class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(), prices.end());
        int leftover = money - (prices[0]+prices[1]);

        return leftover >=0 ? leftover : money;
    }
};
