class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int min = 200;
        string sm, prefix="";
        for(int i=0; i<strs.size(); i++){
            if(strs[i].size()<=min){
                min = strs[i].size();
                sm = strs[i];
            }
        }

        for(int i = 0; i<min; i++){
            for(int j = 0; j<strs.size(); j++){
                if(sm[i]!=strs[j][i]){
                    return prefix;
                }
            }
            prefix+=sm[i];
        }

        return prefix;
    }
};
