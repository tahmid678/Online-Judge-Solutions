#include<iostream>
using namespace std;

void init_code()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

int main()
{
    init_code();
    int t, a, b, div;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        if (a % b == 0)
        {
            cout << 0 << endl;
        }
        else if (a > b)
        {
            div = a / b;
            div++;
            cout << (div * b) - a << endl;
        }
        else
        {
            cout << b - a << endl;
        }
    }

    return 0;
}
