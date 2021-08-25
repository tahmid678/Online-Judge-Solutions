#include<stdio.h>

int gcd(int a,int b)
{
    int i,gcd;
    for(i=1; i<=a&&i<=b; i++)
    {
        if(a%i==0&&b%i==0)
            gcd=i;
    }
    return gcd;
}

int main()
{
    int t,n,m;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);
        printf("%d\n",(n/gcd(n,m))*(m/gcd(n,m)));
    }

    return 0;
}
