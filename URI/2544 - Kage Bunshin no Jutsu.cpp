#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n,i;

    while(cin>>n){
        i=0;
        while(1){
            if(pow(2,i)==n){
                cout<<i<<endl;
                break;
            }
            i++;
        }
    }

    return 0;
}
