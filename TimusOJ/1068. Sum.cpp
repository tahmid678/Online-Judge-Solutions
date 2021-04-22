#include<iostream>
using namespace std;

int main(){
    int n,sum=0;
    cin>>n;

    if(n>0){
        do{
           sum+=n;
        }while(--n);
    }
    else{
        do{
            sum+=n;
        }while(++n<=1);
    }

    cout<<sum<<endl;

    return 0;
}
