#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int n)
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
    int i,t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==1)
            cout<<1<<" "<<n<<endl;
        else if(isPrime(n))
            cout<<1<<" "<<n<<endl;
        else
        {
            for(i=2; i<=sqrt(n); i++)
            {
                if(n%i==0)
                {
                    cout<<i<<" "<<n/i<<endl;
                    break;
                }
            }
        }
    }

    return 0;
}
