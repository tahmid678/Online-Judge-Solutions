class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        sort(dictionary.begin(), dictionary.end(), [](string a, string b){return a.size()<b.size();});
        vector<string> s;
        string st = "";
        for(int i=0; i<sentence.size(); i++){
            if(sentence[i]!=' '){
                st += sentence[i];
            }else{
                s.push_back(st);
                st = "";
            }
        }
        s.push_back(st);
        string res = "";
        for(int i=0; i<s.size(); i++){
            string root;
            bool isFound = false;
            int prev = INT_MAX;
            for(int j = 0; j<dictionary.size(); j++){
                if(s[i].substr(0, dictionary[j].size()) == dictionary[j]){
                    isFound = true;
                    root = dictionary[j];
                    break;
                }
            }
            if(isFound){
                if(i!=s.size()-1){
                    res += root + " ";
                }else{
                    res += root;
                }
            }else{
                if(i!=s.size()-1){
                    res += s[i] + " ";
                }else{
                    res += s[i];
                }
            }
        }

        return res;
    }
};
