#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string football;
    cin>>football;
    int i=0,zero=0,one=0;

    while(i<football.size())
    {
        if(football[i]=='0')
        {
            zero++;
            one=0;
        }
        else
        {
            one++;
            zero=0;
        }

        if(one>=7||zero>=7)
        {
            cout<<"YES"<<endl;
            return 0;
        }

        i++;
    }

    cout<<"NO"<<endl;
    return 0;
}
