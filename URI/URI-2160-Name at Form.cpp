#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char name[500];

    cin.getline(name,500);

    if(strlen(name)<=80)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
