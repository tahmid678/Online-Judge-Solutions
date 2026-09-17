class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if (arr.size() < 3)
            return false;

        int i = 0;
        int j = arr.size() - 1;

        while (i < arr.size() - 2) {
            if (arr[i] < arr[i + 1])
                i++;
            else
                break;
        }

        while (j > 0) {
            if (arr[j] < arr[j - 1])
                j--;
            else
                break;
        }

        if (i == arr.size() - 1 || j == 0)
            return false;

        return i == j;
    }
};