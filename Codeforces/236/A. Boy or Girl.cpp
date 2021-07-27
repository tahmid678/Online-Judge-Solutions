#include<iostream>
#include<cstring>
#include<set>
using namespace std;

int main(){
    string n1;
    set<char> n2;
    getline(cin,n1);

    for(int i=0;i<n1.size();i++){
        n2.insert(n1[i]);
    }

    if(n2.size()%2!=0)
        cout<<"IGNORE HIM!"<<endl;
    else
        cout<<"CHAT WITH HER!"<<endl;

    return 0;
}
