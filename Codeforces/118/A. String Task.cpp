#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

int main()
{
    string str;
    vector<char> rstr;
    cin>>str;
    for(char x:str)
    {
        if(x=='A'||x=='E'||x=='I'||x=='O'||x=='U'||x=='Y'||x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='y')
            continue;
        else if(x>=97&&x<=122)
        {
            rstr.push_back('.');
            rstr.push_back(x);
        }
        else
        {
            rstr.push_back('.');
            rstr.push_back(x+32);
        }
    }

    for(char x:rstr)
        cout<<x;

    return 0;
}
