#include<iostream>
using namespace std;

int main(){

    int a,b,t,t1;
    double r1,r2;

    cin>>t;

    while(t--){
        cin>>a>>b>>r1>>r2;
        t1=0;

        while(1){
            t1++;

            if(t1<=100){
                a+=(a*r1)/100;
                b+=(b*r2)/100;

                if(a>b){
                    cout<<t1<<" anos."<<endl;
                    break;
                }
            }
            else{
                cout<<"Mais de 1 seculo."<<endl;
                break;
            }
        }
    }

    return 0;
}
