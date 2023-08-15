class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> st;
        set<int>::iterator itr;
        for(int i=0; i<nums.size(); i++){
            st.insert(nums[i]);
        }
        nums.clear();

        for(itr = st.begin(); itr !=st.end(); itr++){
            nums.push_back(*itr);
        }

        return st.size();
    }
};
