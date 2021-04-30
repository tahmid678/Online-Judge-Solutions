#include<iostream>
using namespace std;

int main()
{
    int m,n,i,j,cnt,cycle;

    while(cin>>m>>n)
    {
        cycle=0;
        if(m<=n)
        {
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

        }
        else
        {
            for(i=m; i>=n; i--)
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
        }
        cout<<m<<" "<<n<<" "<<cycle<<endl;
    }

    return 0;
}
