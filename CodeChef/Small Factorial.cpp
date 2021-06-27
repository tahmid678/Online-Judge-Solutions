#include<iostream>
using namespace std;

int main()
{
    int t,n,fact;
    cin>>t;
    while(t--)
    {
        cin>>n;
        fact=1;
        while(n>0)
        {
            fact*=n;
            n--;
        }
        cout<<fact<<endl;
    }

    return 0;
}
