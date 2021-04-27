#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

long long number[1000000];

int main(){
    long long n;
    int i=0;
    cout<<setprecision(4)<<fixed;

    while(cin>>n){
        number[i]=n;
        i++;
    }
    i--;

    while(i>=0){
        cout<<sqrt(number[i])<<endl;
        i--;
    }

    return 0;
}
