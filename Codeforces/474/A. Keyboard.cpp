#include<bits/stdc++.h>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    char c;
    string s;
    cin >> c >> s;
    vector<string> st;
    st.push_back("qwertyuiop");
    st.push_back("asdfghjkl;");
    st.push_back("zxcvbnm,./");

    for (int i = 0; i < s.size(); i++)
    {
        bool found = false;
        char l;
        if (c == 'R')
        {
            for (int j = 0; j < st.size(); j++)
            {
                for (int k = 0; k < st[j].size(); k++)
                {
                    if (st[j][k] == s[i])
                    {
                        found = true;
                        l = st[j][k - 1];
                    }
                }
                if (found)
                {
                    break;
                }
            }
            cout << l;
        }
        else
        {
            for (int j = 0; j < st.size(); j++)
            {
                for (int k = 0; k < st[j].size(); k++)
                {
                    if (st[j][k] == s[i])
                    {
                        found = true;
                        l = st[j][k + 1];
                    }
                }
                if (found)
                {
                    break;
                }
            }
            cout << l;
        }
    }

    return 0;
}
