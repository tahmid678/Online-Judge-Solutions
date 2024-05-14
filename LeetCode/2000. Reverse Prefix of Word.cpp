class Solution {
public:
    string reversePrefix(string word, char ch) {
        int t=-1;
        for(int i=0; i<word.size(); i++){
            if(word[i]==ch){
                t = i;
                break;
            }
        }

        if(t!=-1){
            for(int i=0; i<=t; i++, t--){
                swap(word[i], word[t]);
            }
        }

        return word;
    }
};
