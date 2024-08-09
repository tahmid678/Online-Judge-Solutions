class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int minMoves = 0;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size()-1; i++){
            if(nums[i] >= nums[i+1]){
                minMoves += nums[i]-nums[i+1]+1;
                nums[i+1] += nums[i]-nums[i+1]+1;
            }
        }
        return minMoves;
    }
};
