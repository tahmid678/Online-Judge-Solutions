#include<stdio.h>
#include<string.h>

int main()
{
    char a[17],b[34];
    int i,j,l;
    gets(a);
    l=strlen(a);
    for(i=0,j=0; i<l; i++)
    {
        if(i==0&&a[i]>=97&&a[i]<=122)
        {
            b[j]=a[i]-32;
            j++;
        }
        else if(a[i]=='s')
        {
            b[j]='$';
            j++;
        }
        else if(a[i]=='i')
        {
            b[j]='!';
            j++;
        }
        else if(a[i]=='o')
        {
            b[j]='(';
            j++;
            b[j]=')';
            j++;
        }
        else
        {
            b[j]=a[i];
            j++;
        }
    }

    b[j]='.';
    j++;
    b[j]='\0';
    printf(b);

    return 0;
}
