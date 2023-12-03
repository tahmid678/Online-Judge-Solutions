class Solution {
public:
    int calcTime(vector<int>& ds1, vector<int>& ds2){
        int x = abs(ds2[0]-ds1[0]);
        int y = abs(ds2[1]-ds1[1]);

        return max(x, y);
    }

    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int sum = 0;
        for(int i=0; i<points.size()-1; i++){
            sum+=calcTime(points[i], points[i+1]);
        }

        return sum;
    }
};
