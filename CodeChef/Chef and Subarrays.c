#include<stdio.h>

int main()
{
    int i,j,k,t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int a[n];
        int count=0,sum=0,mul=1;
        for(i=0; i<n; i++)
            scanf("%d",&a[i]);
        for(i=0; i<n; i++)
        {
            for(j=i; j<n; j++)
            {
                for(k=i; k<=j; k++)
                {
                    sum+=a[k];
                    mul*=a[k];
                }
                if(sum==mul)
                    count++;
                sum=0;
                mul=1;
            }
        }
        printf("%d\n",count);
    }

    return 0;
}
