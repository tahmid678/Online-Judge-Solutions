#include<iostream>
using namespace std;

int main(){
    int t,n,x,m,i=1;
    cin>>t;

    while(i<=t){
        cin>>n;
        m=0;
        while(n--){
            cin>>x;
            if(x>0)
                m+=x;
        }
        cout<<"Case "<<i<<": "<<m<<endl;
        i++;
    }

    return 0;
}
