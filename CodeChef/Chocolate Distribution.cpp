#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x1, x2, x3;
        if(n%2==0){
            x1=1;
            x2=1;
            x3=(n-2);
        }else{
            x1=n%2;
            x2=x3=n/2;
        }

        cout<<x1<<" "<<x2<<" "<<x3<<endl;
    }

    return 0;
}
