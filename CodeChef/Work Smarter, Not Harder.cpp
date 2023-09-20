#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l, v1, v2;
        cin>>l>>v1>>v2;
        float t1 = ceil((float)l/v1);
        float t2 = ceil((float)l/v2);

        if(t1>t2)
        {
            cout<<(t1-t2)-1<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }

    return 0;
}
