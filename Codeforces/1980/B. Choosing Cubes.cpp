#include<bits/stdc++.h>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        int n, f, k;
        cin >> n >> f >> k;
        vector<int> cubes(n);
        for (int i = 0; i < n; i++)
        {
            cin >> cubes[i];
        }
        int fav = cubes[f - 1];
        sort(cubes.begin(), cubes.end(), greater<int>());
        if (n == k)
        {
            cout << "YES" << endl;
            continue;
        }
        if (cubes[k - 1] == fav && cubes[k] == fav)
        {
            cout << "MAYBE" << endl;
        }
        else if (cubes[k] < fav)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
