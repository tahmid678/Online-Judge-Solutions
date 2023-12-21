class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int> xAxis;
        int maxWidth = 0;

        for(auto it: points){
            xAxis.push_back(it[0]);
        }

        sort(xAxis.begin(), xAxis.end());
        for(int i=xAxis.size()-1; i>0; i--){
            if((xAxis[i]-xAxis[i-1])>maxWidth){
                maxWidth = xAxis[i]-xAxis[i-1];
            }
        }

        return maxWidth;
    }
};
