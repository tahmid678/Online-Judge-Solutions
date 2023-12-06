class Solution {
public:
    int totalMoney(int n) {
        int mon;
        int init = mon = 1;
        int save = mon;

        for(int i = 1; i<n; i++){
            if(i % 7 == 0){
                mon = init = init + 1;
                save += mon;
            }else{
                save += ++mon;
            }
        }

        return save;
    }
};
