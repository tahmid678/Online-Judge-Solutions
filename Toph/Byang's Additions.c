#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    while(a!=0||b!=0)
    {
        if(a%10+b%10>9)
        {
            printf("Yes\n");
            return 0;
        }
        a=a/10;
        b=b/10;
    }
    printf("No\n");

    return 0;
}
