#include<iostream>
using namespace std;

int main(){
    int n,v,i,t,temp;
    cin>>n;
    i=n;
    t=0;

    do{
        cin>>v;
        if(i==n){
            temp=v;
        }
        if(temp<v){
            t++;
        }
    }while(--n);

    if(t==0)
        cout<<"S"<<endl;
    else
        cout<<"N"<<endl;

    return 0;
}
