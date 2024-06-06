class Solution
{
public:
    int longestPalindrome(string s)
    {
        vector<int> v(123, 0);
        int res = 0;
        bool firstOdd = true;

        for(int i=0; i<s.size(); i++)
        {
            v[s[i]]++;
        }

        sort(v.begin(), v.end(), greater<int>());

        for(int i=0; i<123; i++)
        {
            if(v[i]%2==0)
            {
                res += v[i];
            }
            else if(firstOdd)
            {
                res += v[i];
                firstOdd = false;
            }
            else
            {
                res += v[i]-1;
            }
        }

        return res;
    }
};
