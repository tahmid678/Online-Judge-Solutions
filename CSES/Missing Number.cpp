#include<iostream>
using namespace std;

int main(){
    int n, x;
    cin>>n;
    bool m[n+1]={false};

    for(int i=1; i<n; i++){
        cin>>x;
        m[x]=true;
    }

    int i=1;
    while(m[i]!=false){
        i++;
    }
    cout<<i;

    return 0;
}
