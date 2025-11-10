class Solution {
public:
    bool canMeasureWater(int x, int y, int target) {
        if (x + y < target)
            return false;
        if (x < y)
            swap(x, y);

        while (x && y) {
            x %= y;
            swap(x, y);
        }
        return !(target % x);
    }
};
