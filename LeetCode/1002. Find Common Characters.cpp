class Solution
{
public:
    vector<string> commonChars(vector<string>& words)
    {
        sort(words.begin(), words.end(), [](string a, string b)
        {
            return a.size()<b.size();
        });
        vector<map<char, int>> vp(words.size());

        for(int i=0; i<words.size(); i++)
        {
            for(int j=0; j<words[i].size(); j++)
            {
                vp[i][words[i][j]]++;
            }
        }

        vector<string> res;
        string s = words[0];
        for(int i=0; i<s.size(); i++)
        {
            bool exist = true;
            for(int j=0; j<vp.size(); j++)
            {
                if(vp[j][s[i]]>0)
                {
                    vp[j][s[i]]--;
                    continue;
                }
                else
                {
                    exist = false;
                    break;
                }
            }
            if(exist)
            {
                res.push_back(string(1, s[i]));
            }
        }
        return res;
    }
};
