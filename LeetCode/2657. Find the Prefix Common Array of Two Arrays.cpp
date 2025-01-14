class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> preCommonArray;
        set<int> nums;

        for (int i = 0; i < A.size(); i++) {
            nums.insert(A[i]);
            nums.insert(B[i]);
            preCommonArray.push_back(2 * (i + 1) - nums.size());
        }
        return preCommonArray;
    }
};
