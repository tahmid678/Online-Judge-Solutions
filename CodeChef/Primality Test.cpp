#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int n)
{
    if(n<2)
        return false;
    else if(n==2)
        return true;
    else if(n%2==0)
        return false;
    else
    {
        for(int i=3; i<=sqrt(n); i+=2)
        {
            if(n%i==0)
                return false;
        }
    }

    return true;
}

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(isPrime(n))
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }

    return 0;
}
