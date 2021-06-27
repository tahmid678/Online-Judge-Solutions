#include<iostream>
using namespace std;

int main()
{
    int t,n,occFour;
    cin>>t;
    while(t--)
    {
        cin>>n;
        occFour=0;
        while(n!=0)
        {
            if(n%10==4)
                occFour++;
            n=n/10;
        }
        cout<<occFour<<endl;
    }

    return 0;
}
