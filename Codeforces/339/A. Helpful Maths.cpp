#include<iostream>
#include<string>
using namespace std;

int main()
{
    string opr;
    int i,j,ind;
    getline(cin,opr);

    for(i=0; i<opr.length(); i+=2)
    {
        char temp=opr[i];
        ind=i;
        for(j=i+2; j<opr.length(); j+=2)
        {
            if(opr[j]<temp)
            {
                temp=opr[j];
                ind=j;
            }
        }
        if(ind!=i)
        {
            opr[ind]=opr[i];
            opr[i]=temp;
        }
    }
    cout<<opr<<endl;

    return 0;
}
