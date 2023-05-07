class Solution {
public:
    bool isPalindrome(int x) {
       int num, revNum, rem, min, max;
       num = x;
       min = pow(-2, 31) ;
       max = pow(2, 31)-1;
       revNum = 0;

       if(num<0){
           return false;
       }
       else{
           while(num!=0){
               rem = num%10;
               num = num/10;
               if(revNum<min/10 || revNum>max/10){
                   return false;
               }
               revNum = revNum*10 + rem;
           }

           if(revNum!=x){
               return false;
           }
       }
       return true;
    }
};
