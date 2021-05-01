#include<iostream>
using namespace std;

int main()
{
    int a,i,t=9,sum=0;

    for(i=0; i<t; i++)
    {
        cin>>a;
        sum+=a;
    }

    switch(sum%t)
    {
    case 0:
        cout<<"Rudolph"<<endl;
        break;
    case 1:
        cout<<"Dasher"<<endl;
        break;
    case 2:
        cout<<"Dancer"<<endl;
        break;
    case 3:
        cout<<"Prancer"<<endl;
        break;
    case 4:
        cout<<"Vixen"<<endl;
        break;
    case 5:
        cout<<"Comet"<<endl;
        break;
    case 6:
        cout<<"Cupid"<<endl;
        break;
    case 7:
        cout<<"Donner"<<endl;
        break;
    case 8:
        cout<<"Blitzen"<<endl;
        break;
    }

    return 0;
}
