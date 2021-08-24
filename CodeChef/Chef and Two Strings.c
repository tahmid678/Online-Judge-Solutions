#include<stdio.h>

int main()
{
    char s1[102],s2[102];
    int i,t;
    scanf("%d",&t);
    while(t--)
    {
        int n=0,max=0,min=0;
        scanf("%s",s1);
        scanf("%s",s2);
        for(i=0; s1[i]!='\0'; i++)
            n++;
        for(i=0; i<n; i++)
        {
            if(s1[i]!=s2[i]&&s1[i]!='?'&&s2[i]!='?')
                min++;
            else if(s1[i]=='?'||s2[i]=='?')
                max++;
        }

        printf("%d %d\n",min,min+max);
    }

    return 0;
}
