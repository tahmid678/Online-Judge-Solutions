class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int res = arr.size()/4;
        unordered_map<int, int> hashedElement;

        for(int i=0; i<arr.size(); i++){
            hashedElement[arr[i]]++;
        }

        for(auto it : hashedElement){
            if(it.second>res){
                res = it.first;
                break;
            }
        }

        return res;
    }
};
