class Solution {
public:
    string largestGoodInteger(string num) {
        vector<string> rs;
        string tmp = "";
        for(int i = 0; i<num.size(); i++){
            if(i+2<num.size()){
                if(num[i]==num[i+1]&&num[i+1]==num[i+2]){
                    tmp+=num[i];
                    tmp+=num[i+1];
                    tmp+=num[i+2];
                    rs.push_back(tmp);
                    tmp="";
                    i+=2;
                }
            }
        }

        sort(rs.begin(), rs.end());
        int index = rs.size();
        if(index){
            return rs[index-1];
        }else{
            return "";
        }
    }
};
