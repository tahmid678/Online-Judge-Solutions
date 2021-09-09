#include<iostream>
#include<cmath>
using namespace std;

bool is_prime(int n)
{
    int i;
    if(n<2)
        return false;
    else if(n==2)
        return true;
    else if(n%2==0)
        return false;
    else
    {
        for(i=3; i<=sqrt(n); i+=2)
        {
            if(n%i==0)
                return false;
        }
    }

    return true;
}

int main()
{
    int i,t,m,n;
    cin>>t;
    while(t--)
    {
        cin>>m>>n;
        for(i=m; i<=n; i++)
        {
            if(is_prime(i))
                cout<<i<<endl;
        }
        cout<<endl;
    }

    return 0;
}
