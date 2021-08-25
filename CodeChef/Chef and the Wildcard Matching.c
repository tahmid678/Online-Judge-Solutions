#include<stdio.h>
#include<string.h>

int main()
{
    char X[15],Y[15];
    int t,i,l;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",X);
        scanf("%s",Y);
        l=strlen(X);
        i=0;
        while(i<l)
        {
            if(X[i]!=Y[i]&&X[i]!='?'&&Y[i]!='?')
            {
                printf("No\n");
                break;
            }
            i++;
        }
        if(i==l)
            printf("Yes\n");
    }

    return 0;
}
