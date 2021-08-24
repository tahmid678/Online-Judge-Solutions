#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int t;
    string s;
    cin>>t;

    while(t--)
    {
        cin>>s;
        int i=0;
        while(i<s.size())
        {
            if(s[i]==s[i+1])
            {
                cout<<"no"<<endl;
                break;
            }
            i+=2;
        }
        if(i>=s.size())
            cout<<"yes"<<endl;
    }

    return 0;
}
