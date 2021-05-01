#include<iostream>
using namespace std;

int main()
{
    int n,g,x,vi,sum=0,runes[26];
    char ri;
    cin>>n>>g;

    while(n--)
    {
        cin>>ri>>vi;
        runes[ri-1]=vi;
    }
    cin>>x;
    while(x--)
    {
        cin>>ri;
        sum+=runes[ri-1];
    }
    if(sum>=g)
        cout<<sum<<endl<<"You shall pass!"<<endl;
    else
        cout<<sum<<endl<<"My precioooous"<<endl;

    return 0;
}
