class Solution {
public:
    int countSeniors(vector<string>& details) {
        int result = 0;
        for (int i = 0; i < details.size(); i++) {
            string age = details[i].substr(11, 2);
            if (age > "60") {
                result++;
            }
        }
        return result;
    }
};
