class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long maximumHappiness = 0;
        sort(happiness.begin(), happiness.end(), greater<int>());
        for(int i=0; i<k; i++){
            if(happiness[i]-i>0){
                maximumHappiness+=happiness[i]-i;
            }else{
                break;
            }
        }
        return maximumHappiness;
    }
};
