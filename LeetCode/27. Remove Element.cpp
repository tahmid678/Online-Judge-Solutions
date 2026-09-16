class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int left = 0;
        int right = 0;
        
        while(right < nums.size()){
            if(nums[right] != val){
                nums[left] = nums[right];
                left++;
            }
            right++;
        }
        
        return left;
    }
};