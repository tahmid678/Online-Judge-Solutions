class Solution {
public:
    int find(string word, string chars){
        vector<int> ds(123, 0);
        for(int i=0; i<chars.size(); i++){
            ds[chars[i]]+=1;
        }

        for(int i=0; i<word.size(); i++){
            if(ds[word[i]]<=0){
                return 0;
            }else{
                ds[word[i]]--;
            }
        }

        return word.size();
    }

    int countCharacters(vector<string>& words, string chars) {
        int sum = 0;
        for(int i=0; i<words.size(); i++){
            sum += find(words[i], chars);
        }

        return sum;
    }
};
