#include<stdio.h>

int main()
{
    int n,k;
    scanf("%d %d",&n,&k);

    while(k--)
    {
        if(n%10!=0)
            n--;
        else
            n=n/10;
    }

    printf("%d\n",n);

    return 0;
}
