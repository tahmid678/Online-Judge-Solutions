#include<stdio.h>
#include<math.h>
int main()
{
    double p;
    int x,m;
    scanf("%lf",&p);
    x=floor(p);
    m=x;
    x-=x%10;
    printf("[");
    for(int i=0; i<10; i++)
    {
        if(i<x/10)
            printf("+");
        else
            printf(".");
    }
    printf("] %d%%\n",m);

    return 0;
}
