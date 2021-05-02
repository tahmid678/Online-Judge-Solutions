#include<iostream>
using namespace std;

int main()
{
    int t,n,sum;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n<10)
            cout<<n+n<<endl;
        else
        {
            sum=0;
            sum+=n%10;
            while(n!=0)
            {
                if(n<10)
                {
                    sum+=n%10;
                    break;
                }
                else
                    n/=10;
            }
            cout<<sum<<endl;
        }
    }

    return 0;
}
