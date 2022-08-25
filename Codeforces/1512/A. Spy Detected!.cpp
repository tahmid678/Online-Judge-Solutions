#include<iostream>
using namespace std;

int main()
{
    int n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];

        for(int i=0; i<n; i++)
            cin>>a[i];
        for(int i=0; i<n; i++)
        {
            if (a[i]==a[i+1]&&a[i]!=a[i+2])
            {
                cout<<i+3<<endl;
                break;
            }
            else if(a[i]!=a[i+1]&&a[i]==a[i+2])
            {
                cout<<i+2<<endl;
                break;
            }
            else if(a[i]!=a[i+1]&&a[i+1]==a[i+2])
            {
                cout<<i+1<<endl;
                break;
            }
        }
    }

    return 0;
}
