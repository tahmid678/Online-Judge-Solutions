#include<iostream>
using namespace std;

int main()
{
    int t,a,b;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        cin>>a>>b;
        if(a%2==0)
            a++;
        int sum=0;
        while(a<=b)
        {
            sum+=a;
            a+=2;
        }
        cout<<"Case "<<i+1<<": "<<sum<<endl;
    }

    return 0;
}
