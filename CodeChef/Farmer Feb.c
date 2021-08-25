#include<stdio.h>
#include<math.h>

int prime(int x,int y)
{
    int sum=x+y;
    while(sum++)
    {
        int prime=1;
        for(int i=2; i<=sqrt(sum); i++)
        {
            if(sum%i==0)
            {
                prime=0;
                break;
            }
        }
        if(prime)
            return sum-(x+y);
    }
}

int main()
{
    int t,x,y;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&x,&y);
        printf("%d\n",prime(x,y));
    }

    return 0;
}
