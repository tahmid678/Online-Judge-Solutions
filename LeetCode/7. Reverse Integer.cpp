class Solution {
public:
    int reverse(int x) {
        int revNum = 0, rem, max, min;
        max = (pow(2, 31)-1);
        min = pow(-2, 31);
        while(x!=0){
            rem = x%10;
            x = x/10;
            if(revNum<min/10 || revNum>max/10){
                return 0;
            }
            revNum = revNum*10 + rem;
        }
        return revNum;
    }
};