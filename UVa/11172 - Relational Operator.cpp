#include<iostream>
using namespace std;

int main(){
    int t,a,b;
    cin>>t;

    while(t--){
        cin>>a>>b;
        a>b?cout<<">\n":a<b?cout<<"<\n":cout<<"=\n";
    }

    return 0;
}
