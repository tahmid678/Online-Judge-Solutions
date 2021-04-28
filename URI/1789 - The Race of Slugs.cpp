#include<iostream>
using namespace std;

int main(){
    int t,m,speed;

    while(cin>>t){
        m=-1;
        while(t--){
            cin>>speed;
            if(speed>m)
                m=speed;
        }
        if(m<10)
            cout<<1<<endl;
        else if(m>=10&&m<20)
            cout<<2<<endl;
        else
            cout<<3<<endl;
    }

    return 0;
}
