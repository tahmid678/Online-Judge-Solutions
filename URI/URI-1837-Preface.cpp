#include<iostream>
using namespace std;

int main(){
    int a,b,r=0;
    cin>>a>>b;

    if(b!=0){
        while(1){
            if(a%b==0){
                cout<<a/b<<" "<<r<<endl;
                return 0;
            }
            a--;
            r++;
        }
    }

    return 0;
}
