#include<bits/stdc++.h>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, m;
    cin >> n >> m;
    int t1 = n;
    int t2 = m;
    int t3 = 0;
    while (t1 >= t2)
    {
        t3++;
        t1++;
        t2 += m;
    }

    cout << n + t3 << endl;

    return 0;
}
