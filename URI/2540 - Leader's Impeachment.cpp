#include<iostream>
using namespace std;

int main()
{
    int n,v,i;
    double t;

    while(cin>>n)
    {
        t=(n*2.0)/3;
        i=0;
        while(n--)
        {
            cin>>v;
            if(v==1)
                i++;
        }
        if(i>=t)
            cout<<"impeachment"<<endl;
        else
            cout<<"acusacao arquivada"<<endl;
    }

    return 0;
}
