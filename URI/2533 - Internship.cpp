#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int m,n,c,x,y;
    double api;
    cout<<setprecision(4)<<fixed;

    while(cin>>m)
    {
        x=0,y=0;
        while(m--)
        {
            cin>>n>>c;
            x+=n*c;
            y+=c;
        }
        y*=100;
        api=(x*1.0)/y;
        cout<<api<<endl;
    }

    return 0;
}
