#include<iostream>
using namespace std;

int main()
{
    int t,i,a,b,c;
    cin>>t;

    i=1;
    while(t--)
    {
        cin>>a>>b>>c;
        if(a>b&&a<c || a>c&&a<b)
            cout<<"Case "<<i<<": "<<a<<endl;
        else if(b>a&&b<c || b>c&&b<a)
            cout<<"Case "<<i<<": "<<b<<endl;
        else
            cout<<"Case "<<i<<": "<<c<<endl;
        i++;
    }

    return 0;
}
