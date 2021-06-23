#include<iostream>
using namespace std;

void reverseAdd(int i,long long p)
{
    long long m,rev;
    m=p;
    rev=0;
    i++;
    while(p!=0)
    {
        rev=rev*10+p%10;
        p/=10;
    }

    m+=rev;
    rev=0;
    p=m;

    while(p!=0)
    {
        rev=rev*10+p%10;
        p/=10;
    }

    if(rev!=m)
        reverseAdd(i,m);
    else
        cout<<i<<" "<<rev<<endl;
}

int main()
{
    long long n,p;
    int i;
    cin>>n;

    while(n--)
    {
        cin>>p;
        i=0;
        reverseAdd(i,p);
    }

    return 0;
}
