#include<iostream>
using namespace std;

int main()
{
    string str;
    int t=0,i,j;

    while(getline(cin,str)&&str.length()!=0)
    {
        if(str[0]=='c')
        {
            cout<<t<<endl;
            t=0;
        }
        else
        {
            for(i=0,j=4; i<3; i++,j/=2)
            {
                if(str[i]=='*')
                    t+=j;
            }
        }
    }

    return 0;
}
