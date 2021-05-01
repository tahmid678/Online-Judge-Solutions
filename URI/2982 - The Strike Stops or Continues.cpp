#include<iostream>
using namespace std;

int main()
{
    int n,c,sum=0;
    char t;
    cin>>n;

    while(n--)
    {
        cin>>t>>c;
        if(t=='V')
            sum+=c;
        else
            sum-=c;
    }
    if(sum<0)
        cout<<"NAO VAI TER CORTE, VAI TER LUTA!"<<endl;
    else
        cout<<"A greve vai parar."<<endl;

    return 0;
}
