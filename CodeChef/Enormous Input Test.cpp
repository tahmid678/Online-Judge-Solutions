#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k,t,cnt=0;
    cin>>n>>k;

    while(n--)
    {
        cin>>t;
        if(t%k==0)
            cnt++;
    }
    cout<<cnt<<endl;

    return 0;
}
