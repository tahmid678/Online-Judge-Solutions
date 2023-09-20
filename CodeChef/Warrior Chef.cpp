#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, h;
        cin>>n>>h;
        int t1[n];
        int sum = 0;

        for(int i=0; i<n; i++)
        {
            cin>>t1[i];
            sum+=t1[i];
        }

        if(sum<h)
        {
            cout<<0<<endl;
        }
        else
        {
            sort(t1, t1+n, greater<int>());
            for(int i=0; i<n; i++)
            {
                h-=t1[i];
                if(h<=0)
                {
                    cout<<t1[i]<<endl;
                    break;
                }
            }
        }
    }

    return 0;
}
