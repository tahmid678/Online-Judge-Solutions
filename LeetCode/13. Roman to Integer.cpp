class Solution {
public:
    int romanToInt(string s) {
        int i, sum = 0;
        int size = s.size();
        int m[size];

        for(i=0; i<size; i++){
            if(s[i]=='I'){
                m[i] = 1;
            }
            else if(s[i]=='V'){
                m[i] = 5;
            }
            else if(s[i]=='X'){
                m[i] = 10;
            }
            else if(s[i]=='L'){
                m[i] = 50;
            }
            else if(s[i]=='C'){
                m[i] = 100;
            }
            else if(s[i]=='D'){
                m[i] = 500;
            }
            else{
                m[i] = 1000;
            }
        }

        for(i=0; i<size; i++){
            if(i<size-1){
                if(m[i]<m[i+1]){
                    sum+= m[i+1]-m[i];
                    i++;
                }
                else{
                    sum+= m[i];
                }
            }
            else{
                sum+= m[i];
            }
        }

        return sum;
    }
};
