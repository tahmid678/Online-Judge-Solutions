#include<stdio.h>
#include<string.h>

int main()
{
    char goat[25][25];
    int i,j,n,len,max;
    scanf("%d",&n);
    getchar();

    for(i=0; i<n; i++)
    {
        gets(goat[i]);
        len=strlen(goat[i]);
        if(len%2==0&&len!=2)
            goat[i][len-1]='\0';
        else if(len<3)
        {
            goat[i][len++]='a';
            goat[i][len++]='\0';
        }
    }

    max=strlen(goat[0]);
    for(i=1; i<n; i++)
    {
        if(max<strlen(goat[i]))
            max=strlen(goat[i]);
    }

    for(i=0; i<n; i++)
    {
        len=strlen(goat[i]);
        for(j=0; j<(max-len)/2; j++)
            printf(" ");
        printf("%s\n",goat[i]);
    }

    return 0;
}
