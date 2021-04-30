#include<iostream>
using namespace std;

int main()
{
    int m,n,i,j,cnt,cycle;

    while(cin>>m>>n)
    {
        int m1=m,n1=n;
        if(m>n)
        {
            int temp=m;
            m=n;
            n=temp;
        }
        cycle=0;
        for(i=m; i<=n; i++)
        {
            j=i;
            cnt=1;
            while(j>1)
            {
                if(j%2!=0)
                {
                    j=3*j+1;
                    cnt++;
                }
                else
                {
                    j=j/2;
                    cnt++;
                }
            }
            if(cnt>cycle)
                cycle=cnt;
        }
        cout<<m1<<" "<<n1<<" "<<cycle<<endl;
    }

    return 0;
}
