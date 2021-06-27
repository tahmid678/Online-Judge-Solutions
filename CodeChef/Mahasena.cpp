#include<iostream>
using namespace std;

int main()
{
    int n,weapon,even,odd;
    cin>>n;
    even=0,odd=0;
    while(n--)
    {
        cin>>weapon;
        if(weapon%2==0)
            even++;
        else
            odd++;
    }

    if(even>odd)
        cout<<"READY FOR BATTLE"<<endl;
    else
        cout<<"NOT READY"<<endl;

    return 0;
}
