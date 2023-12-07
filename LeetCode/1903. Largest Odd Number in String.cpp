class Solution {
public:
    string largestOddNumber(string num) {
        int i;
        for(i = num.size()-1; i>=0; i--){
            if(num[i]%2 == 1){
                break;
            }
        }

        return i>=0? num.substr(0, i+1) : "";
    }
};
