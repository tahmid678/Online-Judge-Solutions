#include<stdio.h>

int main()
{
    int t,n,k;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&k);
        int max=0;
        while(k>=1)
        {
            if(n%k>max)
                max=n%k;
            k--;
        }
        printf("%d\n",max);
    }

    return 0;
}
