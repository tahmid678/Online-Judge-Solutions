#include<iostream>
using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;

    if(s1[3]%2==1 && s2[3]%2==0)
        cout<<"no"<<endl;
    else
        cout<<"yes"<<endl;

    return 0;
}
