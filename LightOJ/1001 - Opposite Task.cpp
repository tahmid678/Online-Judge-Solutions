#include<iostream>
using namespace std;

int main(){
    int t,n;
    cin>>t;

    while(t--){
        cin>>n;
        if(n>10)
            cout<<10<<" "<<n-10<<endl;
        else
            cout<<n<<" "<<0<<endl;
    }

    return 0;
}
