#include<iostream>
using namespace std;

int main()
{
    int i,n,k,s,m=0,cnt=0;
    cin>>n>>k;
    for(i=1; i<=n; i++)
    {
        cin>>s;
        if(s<=0)
            break;
        else if(i==k)
            m=s;
        else if(s<m)
            break;
        cnt++;
    }
    cout<<cnt<<endl;

    return 0;
}
