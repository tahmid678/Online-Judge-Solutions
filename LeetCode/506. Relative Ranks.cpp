class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int size = score.size();
        vector<string> result(size);
        vector<int> auxScore(size);
        for(int i=0; i<size; i++){
            auxScore[i] = score[i];
        }
        sort(auxScore.begin(), auxScore.begin()+size, greater<int>());
        for(int i=0; i<size; i++){
            auto ptr = find(score.begin(), score.end(), auxScore[i]);
            int ptrIndex = ptr-score.begin();
            if(i==0){
                result[ptrIndex] = "Gold Medal";
            }else if(i==1){
                result[ptrIndex] = "Silver Medal";
            }else if(i==2){
                result[ptrIndex] = "Bronze Medal";
            }else{
                result[ptrIndex] = to_string(i+1);
            }
        }
        return result;
    }
};
