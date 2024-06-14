class Solution {
public:
    string addBinary(string a, string b) {
        string res = "";
        int carry = 0;
        int c1, c2;
        for(int i = a.size()-1, j = b.size()-1; i>=0 || j>=0; i--, j--){
            if(i<0){
                c1 = 0;
            }else{
                c1 = int(a[i])-48;
            }

            if(j<0){
                c2 = 0;
            }else{
                c2 = int(b[j])-48;
            }

            if(c1+c2+carry>=2){
                res += to_string(c1+c2+carry-2);
                carry = 1;
            }else{
                res += to_string(c1+c2+carry);
                carry = 0;
            }
        }

        if(carry>0){
            res += to_string(carry);
        }

        for(int i = 0, j=res.size()-1; i<j; i++, j--){
            swap(res[i], res[j]);
        }

        return res;
    }
};
