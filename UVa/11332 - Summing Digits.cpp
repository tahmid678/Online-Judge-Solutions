#include<iostream>
using namespace std;

int summing(int n)
{
    int r,sum=0;
    while(n!=0)
    {
        r=n%10;
        sum+=r;
        n/=10;
    }

    return sum<10? sum : summing(sum);
}

int main()
{
    int n;
    while(cin>>n&&n>0)
    {
        cout<<summing(n)<<endl;
    }

    return 0;
}
