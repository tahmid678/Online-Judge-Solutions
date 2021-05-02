#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int x;
    double y;
    cin>>x>>y;
    cout<<setprecision(2)<<fixed;

    if(x%5==0&&(x+0.5)<=y)
    {
        y-=(x+0.5);
        cout<<y<<endl;
    }
    else
        cout<<y<<endl;

    return 0;
}
