#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    if((a-b)%10>=9)
        cout<<a-b-1<<endl;
    else
        cout<<a-b+1<<endl;

    return 0;
}
