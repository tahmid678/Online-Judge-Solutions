#include<iostream>
using namespace std;

int main()
{
    int t;
    double ti,m;

    while(cin>>t)
    {
        m=11;
        while(t--)
        {
            cin>>ti;
            if(ti<m)
                m=ti;
        }
        cout<<m<<endl;
    }

    return 0;
}
