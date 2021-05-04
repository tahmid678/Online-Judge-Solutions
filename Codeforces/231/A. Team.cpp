#include<iostream>
using namespace std;

int main()
{
    int n,p,v,t,cnt=0;
    cin>>n;
    while(n--)
    {
        cin>>p>>v>>t;
        if(p+v+t>1)
            cnt++;
    }
    cout<<cnt<<endl;

    return 0;
}
