class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int res = 0;
        vector<int> sortedHeights;
        for(int i=0; i<heights.size(); i++){
            sortedHeights.push_back(heights[i]);
        }
        sort(sortedHeights.begin(), sortedHeights.end());
        for(int i=0; i<heights.size(); i++){
            if(sortedHeights[i]!=heights[i]){
                res++;
            }
        }

        return res;
    }
};
