#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, x, h;
    cin>>t;
    while(t--)
    {
        cin>>x>>h;
        int turn = 0, i = 0;
        while(h>0)
        {
            turn++;
            if(i<5)
            {
                h-=x/2;
                i++;
            }
            else
            {
                h-=x;
            }
        }

        cout<<turn<<endl;
    }
    return 0;
}
