#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int t,q,p;
    double total;
    cout<<setprecision(6)<<fixed;
    cin>>t;
    while(t--)
    {
        cin>>q>>p;
        if(q>1000)
            total=(q*p)-(q*p*10)/100.0;
        else
            total=q*p;

        cout<<total<<endl;
    }

    return 0;
}
