#include<iostream>
using namespace std;

int main()
{
    long long n;
    cin>>n;

    if(n==1)
    {
        cout<<n;
    }
    else
    {
        while(n!=1)
        {
            cout<<n<<" ";
            if(n%2==0)
            {
                n/=2;
            }
            else
            {
                n=3*n+1;
            }
        }
        cout<<n;
    }

    return 0;
}
