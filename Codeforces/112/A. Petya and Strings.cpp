#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0; i<s1.size(); i++)
    {
        if(s1[i]==s2[i]||s1[i]==s2[i]+32||s1[i]==s2[i]-32)
            continue;
        else if(s1[i]>=65&&s1[i]<=90&&s2[i]>=65&&s2[i]<=90)
        {
            if(s1[i]-s2[i]<0)
            {
                cout<<-1<<endl;
                return 0;
            }
            else
            {
                cout<<1<<endl;
                return 0;
            }
        }
        else if(s1[i]>=65&&s1[i]<=90&&s2[i]>=97&&s2[i]<=122)
        {
            if(s1[i]+32-s2[i]<0)
            {
                cout<<-1<<endl;
                return 0;
            }
            else
            {
                cout<<1<<endl;
                return 0;
            }
        }
        else if(s1[i]>=97&&s1[i]<=122&&s2[i]>=65&&s2[i]<=90)
        {
            if(s1[i]-32-s2[i]<0)
            {
                cout<<-1<<endl;
                return 0;
            }
            else
            {
                cout<<1<<endl;
                return 0;
            }
        }
        else
        {
            if(s1[i]-s2[i]<0)
            {
                cout<<-1<<endl;
                return 0;
            }
            else
            {
                cout<<1<<endl;
                return 0;
            }
        }
    }
    cout<<0<<endl;

    return 0;
}
