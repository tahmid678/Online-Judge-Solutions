#include<iostream>
using namespace std;

int main()
{
    int t,n;
    int a[501];
    cin>>t;
    while(t--)
    {
        cin>>n;
        bool even=false;
        bool odd=false;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
                even=true;
            else if(a[i]%2!=0)
                odd=true;
        }

        if(even&&odd)
        {
            for(int i=0; i<n; i++)
            {
                if(a[i]%2==0)
                {
                    for(int j=i+1; j<n; j++)
                    {
                        if(a[j]%2!=0)
                        {
                            int temp=a[j];
                            a[j]=a[i];
                            a[i]=temp;
                            break;
                        }
                    }
                }
            }
            for(int i=0; i<n; i++)
                cout<<a[i]<<" ";
            cout<<endl;
        }
        else
            cout<<-1<<endl;
    }

    return 0;
}
