#include<iostream>
using namespace std;

int main(){
    long long n,x,i,m;
    cin>>n;

    while(n--){
        m=0;
        i=0;
        cin>>x;
        while(1){
            if(x%2!=0)
                m++;
            else{
                if(i<=m)
                    i=m;
                m=0;
            }
            x/=2;
            if(x==0)
                break;
        }
        if(i<=m)
            i=m;
        cout<<i<<endl;
    }

    return 0;
}
