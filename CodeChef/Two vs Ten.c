#include<stdio.h>

int main()
{
    int t,x;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&x);
        int count=0;
        if(x%5!=0)
        {
            printf("%d\n",-1);
            continue;
        }
        else
        {
            while(x%10!=0)
            {
                x*=2;
                count++;
            }
            printf("%d\n",count);
        }
    }

    return 0;
}
