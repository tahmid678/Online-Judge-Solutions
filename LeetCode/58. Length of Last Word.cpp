class Solution {
public:
    int lengthOfLastWord(string s) {
        int ct = 0;
        string::iterator it;
        for(it=s.end(); it>=s.begin(); it--){
            if(ct>0 && *it==' '){
                break;
            }
            else if(*it>=65 && *it<=90 || *it>=97 && *it<=122){
                ct++;
            }
        }

        return ct;
    }
};
