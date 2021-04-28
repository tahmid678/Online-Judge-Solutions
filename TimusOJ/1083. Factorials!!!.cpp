#include<iostream>
using namespace std;

int main(){
    int n,fact,m,k=0,i=1;
    char c;
    cin>>n;
    fact=n;
    m=n;

    while(cin>>c){
        k++;
    }
    if(n%k!=0){
        while(n-i*k>=m%k){
            fact*=n-i*k;
            i++;
        }
        cout<<fact<<endl;
    }
    else{
        while(n-i*k>=k){
            fact*=n-i*k;
            i++;
        }
        cout<<fact<<endl;
    }

    return 0;
}
