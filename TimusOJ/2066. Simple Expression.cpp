#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    if(a<=1&&b<=1)
        cout<<a-b-c<<endl;
    else
        cout<<a-b*c<<endl;

    return 0;
}
