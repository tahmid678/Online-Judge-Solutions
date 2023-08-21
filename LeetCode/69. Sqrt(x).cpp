class Solution {
public:
    int mySqrt(int x) {
        long l = 0;
        long r = x;

        while(l<=r){
            long mid = l+(r-l)/2;
            if(mid*mid==x)
                return mid;
            else if(mid*mid>x)
                r = mid-1;
            else if(mid*mid<x)
                l = mid+1;
        }

        return r;
    }
};
