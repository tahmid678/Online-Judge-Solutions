#include<stdio.h>

int main()
{
    int t,x1,y1,x2,y2;
    int m,x,y;

    scanf("%d",&t);
    int temp = 1;
    while(t--)
    {
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        scanf("%d",&m);
        printf("Case %d:\n",temp);
        while(m--)
        {
            scanf("%d %d",&x,&y);
            if(x>x1&&x<x2&&y>y1&&y<y2)
                printf("Yes\n");
            else
                printf("No\n");
        }
        temp++;
    }

    return 0;
}
