#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n,len;
    string word;
    cin>>n;
    getchar();
    while(n--)
    {
        cin>>word;
        len=word.length();
        if(len>10)
            cout<<word[0]<<len-2<<word[len-1]<<endl;
        else
            cout<<word<<endl;
    }

    return 0;
}
