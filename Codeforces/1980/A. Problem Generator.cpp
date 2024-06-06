#include<bits/stdc++.h>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t, n, m;
    cin >> t;
    while (t--)
    {
        vector<int> tmp(72, 0);
        cin >> n >> m;
        string a;
        cin >> a;
        int res = 0;
        for (int i = 0; i < a.size(); i++)
        {
            tmp[a[i]]++;
        }

        for (int i = 65; i < 72; i++)
        {
            if (tmp[i] < m)
            {
                res += m - tmp[i];
            }
        }

        cout << res << endl;
    }

    return 0;
}
