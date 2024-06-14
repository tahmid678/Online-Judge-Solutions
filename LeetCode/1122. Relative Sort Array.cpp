class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int, int> mp;
        vector<int> res;
        for(int i=0; i<arr1.size(); i++){
            mp[arr1[i]]++;
        }
        for(int i=0; i<arr2.size(); i++){
            int cnt = mp[arr2[i]];
            while(cnt--){
                res.push_back(arr2[i]);
            }
            mp.erase(arr2[i]);
        }
        for(auto it = mp.begin(); it!=mp.end(); it++){
            int cnt = it->second;
            while(cnt--){
                res.push_back(it->first);
            }
        }

        return res;
    }
};
