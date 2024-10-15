class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<long> prefixXOR(arr.size() + 1, 0);
        vector<int> result;

        for (int i = 0; i < arr.size(); i++) {
            prefixXOR[i + 1] = prefixXOR[i] ^ arr[i];
        }
        for (vector<int>& query : queries) {
            int temp = prefixXOR[query[1] + 1] ^ prefixXOR[query[0]];
            result.push_back(temp);
        }
        return result;
    }
};
