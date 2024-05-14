class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int currentLowest = prices[0];
        for(int i=1; i<prices.size(); i++){
            if(prices[i]-currentLowest > maxProfit){
                maxProfit = prices[i]-currentLowest;
            }
            if(currentLowest > prices[i]){
                currentLowest = prices[i];
            }
        }
        return maxProfit;
    }
};
