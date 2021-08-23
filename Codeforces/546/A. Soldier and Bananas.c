#include<stdio.h>

int main()
{
    int k,n,w,t;
    scanf("%d %d %d",&k,&n,&w);
    t=(w*(w+1)/2)*k;

    if(t>n)
        printf("%d\n",t-n);
    else
        printf("%d\n",0);

    return 0;
}
