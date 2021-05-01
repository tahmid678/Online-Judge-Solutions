#include<iostream>
using namespace std;

int main()
{
    string str;

    while(getline(cin,str)&&str.length()!=0)
    {
        switch(str[0])
        {
        case 'e':
            cout<<"ingles"<<endl;
            break;
        case 'd':
            cout<<"frances"<<endl;
            break;
        case 'n':
            cout<<"portugues"<<endl;
            break;
        case 'a':
            cout<<"caiu"<<endl;
            break;
        }
    }

    return 0;
}
