#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        double root=sqrt(n);
        cout<<round(root)<<endl;
    }

    return 0;
}
